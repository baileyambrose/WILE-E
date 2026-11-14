import pygame
import sys
import board
import busio
import time

import adafruit_bno08x
from adafruit_bno08x.i2c import BNO08X_I2C

# -----------------------------
# Initialize I2C + BNO08X
# -----------------------------
i2c = busio.I2C(board.SCL, board.SDA, frequency=400000)
bno = BNO08X_I2C(i2c)

# Enable desired sensor reports
bno.enable_feature(adafruit_bno08x.BNO_REPORT_ROTATION_VECTOR)
bno.enable_feature(adafruit_bno08x.BNO_REPORT_ACCELEROMETER)
bno.enable_feature(adafruit_bno08x.BNO_REPORT_GYROSCOPE)

# -----------------------------
# Initialize Pygame fullscreen
# -----------------------------
pygame.init()
screen = pygame.display.set_mode((0, 0), pygame.FULLSCREEN)
pygame.display.set_caption("BNO085 IMU Monitor")

font = pygame.font.SysFont("Consolas", 48)
clock = pygame.time.Clock()

WHITE = (255, 255, 255)
BLACK = (0, 0, 0)

# -----------------------------
# Main Loop
# -----------------------------
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                pygame.quit()
                sys.exit()

    # Read sensor data
    quat = bno.quaternion  # (x, y, z, w)
    accel = bno.acceleration    # (x, y, z)
    gyro = bno.gyro             # (x, y, z)

    # Clear screen
    screen.fill(BLACK)

    # Format text
    lines = [
        "BNO085 IMU Data",
        "",
        f"Rotation Vector:",
        f"  X: {quat[0]: .4f}  Y: {quat[1]: .4f}  Z: {quat[2]: .4f}",f"  W: {quat[3]: .4f}",

        f"Accelerometer (m/s^2):",
        f"  X: {accel[0]: .3f}  Y: {accel[1]: .3f}  Z: {accel[2]: .3f}",
        "",
        f"Gyroscope (rad/s):",
        f"  X: {gyro[0]: .3f}  Y: {gyro[1]: .3f}  Z: {gyro[2]: .3f}",
        "",
        "Press ESC to exit"
    ]

    # Render text lines
    y = 50
    for line in lines:
        text_surface = font.render(line, True, WHITE)
        screen.blit(text_surface, (50, y))
        y += 60

    pygame.display.flip()
    clock.tick(30)  # limit to 30 FPS
