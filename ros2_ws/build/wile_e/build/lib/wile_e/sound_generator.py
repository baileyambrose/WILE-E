import os
import random
import time
from collections import deque
import librosa
import sounddevice as sd

import rclpy
from rclpy.node import Node
from ament_index_python.packages import get_package_share_directory

package_path = get_package_share_directory('wile_e')

# --- Config ---
SOUND_FOLDER = os.path.join(package_path,'sounds')
HISTORY_LENGTH = 10
WAIT_TIME = 1

# Set Master volume to 100%
#os.system("amixer set Master 100%")

class SoundGeneratorNode(Node):
    def __init__(self):
        super().__init__('soundGenerator_node')
        self.history = deque(maxlen=HISTORY_LENGTH)

        self.main_loop()

    def get_random_wav(self):
        files = [f for f in os.listdir(SOUND_FOLDER) if f.endswith(".wav")]
        random.shuffle(files)
        return files

    def select_wav(self):
        while True:
            files = self.get_random_wav()
            for wav_file in files:
                if wav_file in self.history:
                    continue
                if wav_file == "015.wav":
                    if random.randint(0,1) == 1:
                        #print("skipping roar (015.wav)")
                        continue
                        
                return wav_file
            #print("No valid WAV found, retrying...")
            
    def play_wav(self,wav_path):
        # Load file
        y, sr = librosa.load(wav_path, sr=None, mono=True)

        # Shift pitch down 5 semitones (negative = down, positive = up)
        pitch_shift = random.randint(-7,0)
        self.get_logger().info(f"shifting pitch by {pitch_shift} steps")
        y_shifted = librosa.effects.pitch_shift(y, sr=sr, n_steps=pitch_shift)

        # Play result
        sd.play(y_shifted, sr)
        sd.wait()

    def main_loop(self):
        while True:
            wav_file = self.select_wav()
            self.history.append(wav_file)
            wav_path = os.path.join(SOUND_FOLDER, wav_file)
            self.get_logger().info(f"Playing: {wav_file}")
            
            self.play_wav(wav_path)

            self.get_logger().info(f"Finished {wav_file}")

            time.sleep(random.uniform(0,1))

def main():
    rclpy.init()
    node = SoundGeneratorNode()
    rclpy.spin(node)
    pygame.quit()

if __name__ == '__main__':
    main()