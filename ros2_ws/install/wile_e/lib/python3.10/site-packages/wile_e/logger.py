import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import Log
import threading
import tkinter as tk

class LogViewer(Node):
    def __init__(self, text_widget):
        super().__init__('log_viewer')
        self.subscription = self.create_subscription(
            Log,
            '/rosout',
            self.listener_callback,
            10
        )
        self.text_widget = text_widget

        # Define text tags for colors
        self.text_widget.tag_config('DEBUG', foreground='gray')
        self.text_widget.tag_config('INFO', foreground='white')
        self.text_widget.tag_config('WARN', foreground='yellow')
        self.text_widget.tag_config('ERROR', foreground='red')
        self.text_widget.tag_config('FATAL', foreground='purple')

    def listener_callback(self, msg):
        # Map numeric levels to names
        level_map = {
            10: 'DEBUG',
            20: 'INFO',
            30: 'WARN',
            40: 'ERROR',
            50: 'FATAL'
        }
        level_name = level_map.get(msg.level, 'INFO')
        log_line = f"[{level_name}] {msg.name}: {msg.msg}\n"

        # Insert with tag for color
        def insert_line():
            self.text_widget.insert(tk.END, log_line, level_name)
            self.text_widget.see(tk.END)  # auto-scroll

        self.text_widget.after(0, insert_line)

def ros_spin(node):
    rclpy.spin(node)

def main():
    rclpy.init()

    # Tkinter setup
    root = tk.Tk()
    root.title("ROS2 Logger UI")

    # Set background color to black
    root.configure(bg='black')

    # Make window full screen
    root.attributes('-fullscreen', True)

    # Text widget with black background and light text
    text = tk.Text(root, wrap=tk.WORD, bg='black', fg='white',font=('Courier', 18))
    text.pack(expand=True, fill='both')

    node = LogViewer(text)

    # Run ROS in background thread
    ros_thread = threading.Thread(target=ros_spin, args=(node,), daemon=True)
    ros_thread.start()

    root.mainloop()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()