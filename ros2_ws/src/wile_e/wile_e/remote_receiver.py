import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Bool
from wile_e_interfaces.msg import VelocityCommand
from bleak import BleakClient, BleakError
import asyncio
import threading
from rclpy.executors import MultiThreadedExecutor
import time

# ESP32's MAC address and characteristic UUID
DEVICE_ADDRESS = "3C:8A:1F:D3:A0:3E"#"WILE-ESP"
CHARACTERISTIC_UUID = "ad16670f-dbe7-4874-8ac7-8302e07d84d9"

COMMAND_PREFIX = "Command:"
CALIBRATION_PREFIX = "Calibration:"
STAND_CODE = "Stand"
LAY_CODE = "Lay"
DISARM_CODE = "Disarm"

class RemoteReceiverNode(Node):
    def __init__(self):
        super().__init__('remote_receiver')
        self.command_publisher = self.create_publisher(VelocityCommand, 'velocity_command', 10)
        self.calibration_command_publisher = self.create_publisher(String, 'calibration_command', 10)
        self.roboclaw_command_publisher = self.create_publisher(String, 'roboclaw_command', 10)
        self.get_logger().info('Remote receiver/command interpretter node started')
        self.client = None
        self.loop = asyncio.new_event_loop()
        self.loop_thread = threading.Thread(target=self.loop.run_forever, daemon=True)
        self.loop_thread.start()

        self.velocityCommand_timer = self.create_timer(0.1,self.velocity_command_processor)

        self.velocity = 0.0
        self.ang_velocity = 0.0
        self.heading = 0.0
        self.acceleration = 0.0
        self.acceleration_duration = 0.0
        self.constant_speed_duration = 0.0
        self.command_running = False
        self.command_start = 0.0

        # Start BLE logic in the background loop
        asyncio.run_coroutine_threadsafe(self.connect_and_listen(), self.loop)


    async def notification_handler(self, sender, raw_data):
        data = raw_data.decode('utf-8')
        if data.startswith(COMMAND_PREFIX):
            command = data[len(COMMAND_PREFIX):]
            #if not command:
            #    s
            #velocity_command = VelocityCommand()
            if command[0].isdigit():
                values = [float(x.strip()) for x in command.split(',')]
                self.get_logger().info(f'{values}')
                self.velocity = values[0]
                self.ang_velocity = values[1]
                self.heading = values[2]
                self.acceleration = values[3]
                self.acceleration_duration = abs(values[0]) / values[3]
                self.constant_speed_duration = values[4] / abs(values[0]) - self.acceleration_duration
                self.command_running = True
                self.command_start = self.get_clock().now()
            elif command == "Stop!" and self.command_running != False:
                self.command_running = False
                velocity_command = VelocityCommand()
                velocity_command.message = "stop"
                self.command_publisher.publish(velocity_command)
                #message = command
        elif data.startswith(CALIBRATION_PREFIX):
            command = data[len(CALIBRATION_PREFIX):]
            calibration_command = String()
            if command == "Start":
                calibration_command.data = "start"
            elif command == "Stop!":
                calibration_command.data = "stop"
            self.calibration_command_publisher.publish(calibration_command)
        elif data == STAND_CODE or data == LAY_CODE or data == DISARM_CODE:
            roboclaw_command = String()
            roboclaw_command.data = data
            self.roboclaw_command_publisher.publish(roboclaw_command)

        self.get_logger().info(f'Received: {data}')
    def velocity_command_processor(self):
        if self.command_running:
            velocity_command = VelocityCommand()
            now = self.get_clock().now() - self.command_start
            now = now.nanoseconds / 1e9
            if now < self.acceleration_duration:
                velocity_command.velocity = now * self.acceleration * self.velocity/abs(self.velocity)
            elif now < self.acceleration_duration + self.constant_speed_duration:
                velocity_command.velocity = self.velocity
            elif now < 2 * self.acceleration_duration + self.constant_speed_duration:
                velocity_command.velocity = self.velocity - ((now -self.acceleration_duration - self.constant_speed_duration)* self.acceleration * self.velocity/abs(self.velocity))
            else:
                self.command_running = False
            velocity_command.ang_velocity = self.ang_velocity

            if not (now < self.acceleration_duration and velocity_command.velocity < 0.1):
                self.command_publisher.publish(velocity_command)
                self.get_logger().info(f"Published:{velocity_command}")


    async def connect_and_listen(self):
        backoff = 0.1
        while rclpy.ok():
            try:
                self.client = BleakClient(DEVICE_ADDRESS)
                await self.client.connect()
                self.get_logger().info('Connected to ESP32')
                backoff = 0.1
                await self.client.start_notify(CHARACTERISTIC_UUID, self.notification_handler)

                while self.client.is_connected:
                    await asyncio.sleep(1)

                self.get_logger().warn('Disconnected from ESP32')
            except BleakError as e:
                self.get_logger().warn(f'BLE connection error: {e}')
            except Exception as e:
                self.get_logger().warn(f'Unexpected error: {e}')
            finally:
                if self.client.is_connected:
                    await self.client.disconnect()
                self.get_logger().info(f'Retrying to connect in {backoff} seconds...')
                await asyncio.sleep(backoff)
                backoff = min(backoff * 2, 16)  # Exponential backoff up to 16s

    def cleanup_ble(self):
        self.get_logger().info('Shutting down BLE connection...')
        try:
            future = asyncio.run_coroutine_threadsafe(self.client.disconnect(), self.loop)
            future.result(timeout=5)
            self.get_logger().info('Disconnected from ESP32')
        except Exception as e:
            self.get_logger().error(f'Error during BLE cleanup: {e}')
        finally:
            self.loop.call_soon_threadsafe(self.loop.stop)
            self.loop_thread.join()



def main(args=None):
    rclpy.init(args=args)
    node = RemoteReceiverNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.cleanup_ble()  # Add this method to handle disconnect
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
