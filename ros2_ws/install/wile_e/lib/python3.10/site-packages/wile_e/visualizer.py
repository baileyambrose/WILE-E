import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from sensor_msgs.msg import Imu
from wile_e_interfaces.msg import RoboclawPowerBroadcast
import pygame
from ament_index_python.packages import get_package_share_directory
import os
import random
from datetime import timedelta
from collections import deque
import numpy as np


package_path = get_package_share_directory('wile_e')

# Colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 20, 20)
BRIGHT_RED = (255, 150, 150)
GREEN = (0,150,10)#(0, 170, 30)
BRIGHT_GREEN = (0, 210, 30)
YELLOW = (255, 194, 14)
ORANGE = (250, 137, 46)

FONT = os.path.join(package_path,'fonts','AVHersheySimplexHeavy.ttf')

MODE_CHANGE_SPEED = 4.0 #seconds
#----------------------- accelerometer screen --------------------
ACCELERATION_SCREEN = 0
BAR_WIDTH = 58
BAR_SPACING = 75
MAX_BAR_VALUE = [10.0,10.0,10.0,3.2,3.2,3.2]#[10.0,10.0,10.0,2,2,2]
BAR_HEIGHT = 108
BAR_SEGMENT_HEIGHT = 9
BAR_MARGIN_OFFSET = 40
ACCELERATION_HUD = os.path.join(package_path,'HUD','acceleration.png')
ACCELERATION_HUD_STRIPEMASK = os.path.join(package_path,'HUD','acceleration_stripemask.png')

cube = np.array([
    [-1,-1,-1],[1,-1,-1],[1,1,-1],[-1,1,-1],
    [-1,-1,1],[1,-1,1],[1,1,1],[-1,1,1]
])

edges = [(0,1),(1,2),(2,3),(3,0),(4,5),(5,6),(6,7),(7,4),(0,4),(1,5),(2,6),(3,7)]



#----------------------- ros2 node graph screen --------------------
ROS2_SCREEN = 1
CORNER_NODE_COORDS = [(0,0),(186,0),(186,58),(227,122),(0,122)]
NODE_COORDS = [
    CORNER_NODE_COORDS,
    [(186,0),(294,0),(294,58),(253,122),(227,122),(186,58)],
    [(480 - x, y) for (x, y) in CORNER_NODE_COORDS],
    [(480,122),(480,198),(325,198),(325,122)],
    [(480 - x, 320 - y) for (x, y) in CORNER_NODE_COORDS],
    [(x, 320 - y) for (x, y) in CORNER_NODE_COORDS],
    [(197,86),(282,86),(325,160),(282,233),(197,233),(155,160)],
    [(0,122),(0,198),(155,198),(155,122)]
]
NODE_TEXT_COORDS = [(85,75),(240,45),(393,75),(416,174),(385,273),(95,273),(240,184),(64,184)]
STRIPES_SPEED = 10
ROS2_HUD = os.path.join(package_path,'HUD','ros2_central.png')
ROS2_HUD_NODES = os.path.join(package_path,'HUD','ros2_nodes.png')
ROS2_HUD_STRIPEMASK = os.path.join(package_path,'HUD','ros2_stripemask.png')

#----------------------- power status screen --------------------
POWER_SCREEN = 2
POWER_HUD = os.path.join(package_path,'HUD','power.png')
POWER_HUD_STRIPEMASK = os.path.join(package_path,'HUD','power_stripemask.png')

HUD_STRIPES = os.path.join(package_path,'HUD','arrow_stripes.png')

class VisualizerNode(Node):
    def __init__(self):
        super().__init__('visualizer_node')
        low_qos_profile = QoSProfile(depth=10)
        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT,depth=10)
        self.start_time = self.get_clock().now()

        pygame.init()
        #info = pygame.display.Info()
        #self.get_logger().info(f"Resolution: {info.current_w}x{info.current_h}")

        self.WIDTH, self.HEIGHT = 480, 320#1280x720
        self.canvas = pygame.Surface((self.WIDTH, self.HEIGHT))
        #self.screen = pygame.display.set_mode((self.WIDTH,self.HEIGHT))
        self.DISPLAY_WIDTH, self.DISPLAY_HEIGHT = 1280, 720
        self.screen = pygame.display.set_mode((0, 0), pygame.FULLSCREEN)
        pygame.mouse.set_visible(False)

        self.timer = self.create_timer(0.05, self.update)

        self.mode = POWER_SCREEN
        self.mode_timer = self.create_timer(MODE_CHANGE_SPEED, self.mode_update)

        self.imu_subscription = self.create_subscription(Imu,'/imu_data',self.imu_callback,qos_profile)
        self.accelerometer_data = [0.0,0.0,0.0,0.0,0.0,0.0]
        self.acceleration_image = pygame.image.load(ACCELERATION_HUD)
        self.acceleration_stripemask_image = pygame.image.load(ACCELERATION_HUD_STRIPEMASK)
        self.orientation_quaternion = (0,0,0,1)

        self.ros2_nodes = ['accelerometer_interface','camera','remote_receiver','sound_generator','roboclaw_interface','teensy_interface','NN_interface_node']
        self.ros2_node_states = {node: 0 for node in self.ros2_nodes}#0=offline 1=online 2=error
        self.check_nodes(initial=True)
        self.ros2_check_interval_sec = 0.5
        self.ros2_timer = self.create_timer(self.ros2_check_interval_sec, self.check_nodes)
        self.stripes_y = self.HEIGHT
        self.ros2_image = pygame.image.load(ROS2_HUD)
        self.ros2_node_image = pygame.image.load(ROS2_HUD_NODES)
        self.ros2_stripemask_image = pygame.image.load(ROS2_HUD_STRIPEMASK)
        self.text_blink_state = 0
        self.blinking_timer = self.create_timer(0.1,self.text_blinker)

        self.roboclaw_subscription = self.create_subscription(RoboclawPowerBroadcast,'/roboclaw_power_broadcast',self.roboclaw_callback,low_qos_profile)

        self.voltage_log = deque(maxlen=120)
        for i in range(120):
            self.voltage_log.append(11.2)
        self.current_log = deque(maxlen=120)
        for i in range(120):
            self.current_log.append(0.0)
        self.power_image = pygame.image.load(POWER_HUD)
        self.power_stripemask_image = pygame.image.load(POWER_HUD_STRIPEMASK)

        self.stripes_image = pygame.image.load(HUD_STRIPES)

    def mode_update(self):
        self.mode +=1
        if self.mode > 2:
            self.mode = 0
        self.mode = ACCELERATION_SCREEN###

    def imu_callback(self, msg):
        av = msg.angular_velocity
        la = msg.linear_acceleration
        self.accelerometer_data = [la.x,la.y,la.z,av.x,av.y,av.z]
        self.orientation_quaternion = np.array([msg.orientation.x,msg.orientation.y,msg.orientation.z,msg.orientation.w])
        #self.get_logger().info(f"{msg.orientation}")

    def roboclaw_callback(self,msg):
        self.voltage_log.append(msg.battery_voltage / 10)
        self.current_log.append(msg.current_draw / 100)
        #self.get_logger().info(f"voltage: {self.voltage_log[-1]}")
    
    def text_blinker(self):
        self.text_blink_state += 1
        if self.text_blink_state>4:
            self.text_blink_state=0

    def check_nodes(self, initial=False):
        try:
            # Use rclpy graph API to get active node names
            node_info = self.get_node_names_and_namespaces()
            active_nodes = set(name for name, _ in node_info)

            for node in self.ros2_nodes:
                previously = self.ros2_node_states[node]
                currently = node in active_nodes

                if initial:
                    self.ros2_node_states[node] = 1 if currently else 0
                else:
                    if previously == 1 and not currently:
                        self.ros2_node_states[node] = 2
                    elif currently:
                        self.ros2_node_states[node] = 1
        except Exception as e:
            self.get_logger().error(f"Error checking nodes: {e}")


    def update(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                rclpy.shutdown()
        
        if self.mode == ACCELERATION_SCREEN:
            self.draw_acceleration_hud()
        elif self.mode == ROS2_SCREEN:
            self.draw_ros2_hud()
        elif self.mode == POWER_SCREEN:
            self.draw_power_hud()

        scaled_canvas = pygame.transform.scale(self.canvas, (self.DISPLAY_WIDTH, self.DISPLAY_HEIGHT))
        scaled_canvas.set_alpha(random.randint(150,255))
        self.screen.fill((0,0,0))
        self.screen.blit(scaled_canvas, (0, 0))

        pygame.display.flip()

    def draw_acceleration_hud(self):
        self.canvas.blit(self.acceleration_image, (0, 0))
        # Draw bars
        for i, value in enumerate(self.accelerometer_data):
            if abs(value) > MAX_BAR_VALUE[i]:
                value = MAX_BAR_VALUE[i] * (value / abs(value))
            bar_height = int((abs(value) / MAX_BAR_VALUE[i]) * BAR_HEIGHT / BAR_SEGMENT_HEIGHT) * BAR_SEGMENT_HEIGHT
            x = BAR_MARGIN_OFFSET + i * BAR_SPACING
            if i >= 3:
                x += 25
            y = self.HEIGHT // 2
            if value > 0:
                pygame.draw.rect(self.canvas, BLACK, (x-BAR_WIDTH//2, y-BAR_HEIGHT-BAR_SEGMENT_HEIGHT//2, BAR_WIDTH, BAR_HEIGHT-bar_height))
                pygame.draw.rect(self.canvas, BLACK, (x-BAR_WIDTH//2, y+BAR_SEGMENT_HEIGHT//2, BAR_WIDTH, BAR_HEIGHT))
            else:
                pygame.draw.rect(self.canvas, BLACK, (x-BAR_WIDTH//2, y-BAR_HEIGHT-BAR_SEGMENT_HEIGHT//2, BAR_WIDTH, BAR_HEIGHT))
                pygame.draw.rect(self.canvas, BLACK, (x-BAR_WIDTH//2, y+BAR_SEGMENT_HEIGHT//2 +bar_height, BAR_WIDTH, BAR_HEIGHT-bar_height))

        R = self.quaternion_to_matrix(self.orientation_quaternion)
        transformed = [R @ v for v in cube]
        projected = [self.project(v,480,320) for v in transformed]
        for e in edges:
            pygame.draw.line(self.canvas,(200,200,200),projected[e[0]],projected[e[1]],1)
        axes = [np.array([1,0,0]), np.array([0,1,0]), np.array([0,0,1])]
        colors = [(255,0,0),(0,255,0),(0,0,255)]
        for axis,color in zip(axes,colors):
            end = self.project(R @ axis,480,320)
            pygame.draw.line(self.canvas,color,(240,160),end,3)


        
        self.canvas.blit(self.draw_stripes(self.acceleration_stripemask_image),(0,0),special_flags=pygame.BLEND_RGB_ADD)

    def draw_ros2_hud(self):
        self.canvas.blit(self.ros2_image, (0, 0))
        node_surface = pygame.Surface((self.WIDTH, self.HEIGHT))

        for i, coords in enumerate(NODE_COORDS):
            if i == 7: #the state of THIS node will always be "online"
                state = 1
            #elif i ==1:
            #    state = 2
            else:
                state = self.ros2_node_states[self.ros2_nodes[i]]

            if state == 0:
                color = YELLOW
            elif state == 1:
                color = GREEN
            else:
                color = RED
            pygame.draw.polygon(node_surface, color, coords)

        mask_surface = self.ros2_node_image.copy()
        mask_surface.blit(self.draw_stripes(self.ros2_stripemask_image),(0,0),special_flags=pygame.BLEND_RGB_ADD)
        
        node_surface.blit(mask_surface,(0,0),special_flags=pygame.BLEND_RGB_MULT)

        for i, coords in enumerate(NODE_TEXT_COORDS):
            if i == 7: #the state of THIS node will always be "online"
                state = 1
            #elif i ==1:
            #    state = 2
            else:
                state = self.ros2_node_states[self.ros2_nodes[i]]

            if state == 0:
                color = YELLOW
                text = "OFFLINE"
                if self.text_blink_state<2:
                    color = BLACK
            elif state == 1:
                color = GREEN
                text = "ONLINE"
                if self.text_blink_state<2:
                    color = BRIGHT_GREEN
            else:
                color = RED
                text = "ERROR"
                if self.text_blink_state%2==0:
                    color = BLACK
                elif self.text_blink_state==1:
                    color = BRIGHT_RED
            text_surface, text_rect = self.draw_text(text,coords,18,color)
            node_surface.blit(text_surface,text_rect)
            
        self.canvas.blit(node_surface,(0,0),special_flags=pygame.BLEND_RGB_ADD)
        self.canvas.blit(self.ros2_image,(0,0),special_flags=pygame.BLEND_RGB_ADD)
    
    def draw_power_hud(self):
        self.canvas.blit(self.power_image, (0, 0))
        text_surface = pygame.Surface((self.WIDTH, self.HEIGHT))

        active_time = self.get_clock().now() - self.start_time
        active_time = active_time.nanoseconds / 1e9

        #self.voltage_log[-1]=17.0
        voltage_percent = (self.voltage_log[-1]-13.4)/(20.2-13.4)
        if voltage_percent < 0:
            voltage_percent = 0.0
        bar_width = 9*((387*voltage_percent)//9)
        if self.text_blink_state < ((387*voltage_percent)//9)/(3*43) and bar_width >=9:
            bar_width-=9
        pygame.draw.rect(self.canvas,BLACK,(16+bar_width,77,387-bar_width,56))

        for i in range(119):
            pygame.draw.line(self.canvas,RED,(40+(400/120)*i,290-10*(self.voltage_log[i]-11)),(40+(400/120)*(i+1),290-10*(self.voltage_log[i+1]-11)))
            pygame.draw.line(self.canvas,GREEN,(40+(400/120)*i,280-4*min(self.current_log[i],20)),(40+(400/120)*(i+1),280-4*min(self.current_log[i+1],20)))

        text_surface, text_rect = self.draw_text(self.format_active_time(active_time),(359,21.5),24,WHITE)
        self.canvas.blit(text_surface,text_rect)
        if self.text_blink_state <2:
            color = WHITE
        else:
            color = GREEN
        text_surface, text_rect = self.draw_text(f"{round(self.current_log[-1],1)}A",(165.7,170.3),20,color)
        self.canvas.blit(text_surface,text_rect)
        text_surface, text_rect = self.draw_text(str(round(100 * voltage_percent,1)),(429,104.8),24,WHITE)
        self.canvas.blit(text_surface,text_rect)
        if self.text_blink_state%2==0:
            color = WHITE
        else:
            color = RED
        if voltage_percent == 0.0:
            text_surface, text_rect = self.draw_text(f"-.-V",(224,59.5),24,color)
            self.canvas.blit(text_surface,text_rect)
        else:
            text_surface, text_rect = self.draw_text(f"{self.voltage_log[-1]}V",(224,59.5),24,color)
            self.canvas.blit(text_surface,text_rect)
        self.canvas.blit(self.draw_stripes(self.power_stripemask_image),(0,0),special_flags=pygame.BLEND_RGB_ADD)
    
    def format_active_time(self, seconds):
        td = timedelta(seconds=seconds)
        total_seconds = int(td.total_seconds())
        hours, remainder = divmod(total_seconds, 3600)
        minutes, secs = divmod(remainder, 60)
        fractional = seconds - total_seconds
        return f"{hours:02}:{minutes:02}:{secs:02}.{int(fractional * 10):01}"

        
    def draw_text(self, text, position, font_size, color):
        font = pygame.font.Font(FONT, font_size)
        surface = font.render(text, True, color)
        rect = surface.get_rect(center=position)
        return surface, rect

    def draw_stripes(self,surface_mask):
        stripe_surface = pygame.Surface((self.WIDTH, self.HEIGHT))
        self.stripes_y -= STRIPES_SPEED
        if self.stripes_y < 37.16:#self.stripes_x > 452.5:
            self.stripes_y = self.HEIGHT
        stripe_surface.blit(self.stripes_image,(0,self.stripes_y))
        stripe_surface.blit(self.stripes_image,(0,self.stripes_y-282.84))
        stripe_surface.blit(surface_mask,(0,0),special_flags=pygame.BLEND_RGB_MULT)
        return stripe_surface

    def quaternion_to_matrix(self,q):
        x, y, z, w = q
        return np.array([
            [1 - 2*(y*y + z*z), 2*(x*y - z*w),     2*(x*z + y*w)],
            [2*(x*y + z*w),     1 - 2*(x*x + z*z), 2*(y*z - x*w)],
            [2*(x*z - y*w),     2*(y*z + x*w),     1 - 2*(x*x + y*y)]
        ])

    def project(self,point3d, width, height, scale=200):
        x,y,z = point3d
        factor = scale/(-z+3)   # simple perspective
        return int(width/2 + x*factor), int(height/2 - y*factor)




def main():
    rclpy.init()
    node = VisualizerNode()
    rclpy.spin(node)
    pygame.quit()

if __name__ == '__main__':
    main()