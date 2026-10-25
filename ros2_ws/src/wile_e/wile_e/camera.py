#import cv2
#from imutils.video import VideoStream
#from picamera2 import PiCamera2
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
import socket

# Initialize video stream
vs = VideoStream(src=0, resolution=(1920, 1080)).start()

camera = PiCamera2()
camera.resolution = (1024, 768)
camera.start_preview()
sleep(2)
camera.capture('output.jpg')

# Load face detector (Haar cascade or DNN model)
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Define screen resolution
screen_width, screen_height = 640, 480

class CameraNode(Node):
    def __init__(self):
        super().__init__('camera')

        self.camera_loop()

    def camera_loop(self):
        self.get_logger().info("Camera loop started")
        while True:
            # Capture frame
            frame = vs.read()
            if frame is None:
                self.get_logger().error("Camera error")
                break

            # Face detection
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5)

            # Draw face boxes
            for (x, y, w, h) in faces:
                cv2.rectangle(frame, (x, y), (x + w, y + h), (255, 0, 0), 2)

            # Downscale for local display
            small_frame = cv2.resize(frame, (screen_width, screen_height))

            # Display locally
            cv2.imshow("Local Display", small_frame)


def main(args=None):
    rclpy.init(args=args)

    node = CameraNode()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

    # Cleanup
    vs.stop()
    cv2.destroyAllWindows()


if __name__ == '__main__':
    main()



