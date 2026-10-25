import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from bleak import BleakClient, BleakError
import asyncio
import threading
import time

# ESP32's MAC address and characteristic UUID
DEVICE_ADDRESS = "3C:8A:1F:D3:A0:3E"#"WILE-ESP"
CHARACTERISTIC_UUID = "ad16670f-dbe7-4874-8ac7-8302e07d84d9"

class BLEReceiverNode(Node):
    def __init__(self):
        super().__init__('remote_receiver')
        self.publisher_ = self.create_publisher(String, 'ble_data', 10)
        self.get_logger().info('BLE Receiver Node started')
        self.client = BleakClient(DEVICE_ADDRESS)
        self.ble_thread = threading.Thread(target=self.run_ble_loop, daemon=True)
        self.ble_thread.start()

    async def notification_handler(self, sender, data):
        msg = String()
        msg.data = data.decode('utf-8')
        self.publisher_.publish(msg)
        self.get_logger().info(f'Received: {msg.data}')

    async def connect_and_listen(self):
        backoff = 1
        while rclpy.ok():
            try:
                await self.client.connect()
                self.get_logger().info('Connected to ESP32')
                await self.client.start_notify(CHARACTERISTIC_UUID, self.notification_handler)

                while self.client.is_connected:
                    await asyncio.sleep(1)

                self.get_logger().warning('Disconnected from ESP32')
            except BleakError as e:
                self.get_logger().error(f'BLE connection error: {e}')
            except Exception as e:
                self.get_logger().error(f'Unexpected error: {e}')
            finally:
                if self.client.is_connected:
                    await self.client.disconnect()
                self.get_logger().info(f'Retrying in {backoff} seconds...')
                await asyncio.sleep(backoff)
                backoff = min(backoff * 2, 30)  # Exponential backoff up to 30s

    def run_ble_loop(self):
        asyncio.run(self.connect_and_listen())

def main(args=None):
    rclpy.init(args=args)
    node = BLEReceiverNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
