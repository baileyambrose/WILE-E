import os
import random
import time
from collections import deque
import librosa
import sounddevice as sd

# --- Config ---
SOUND_FOLDER = "sounds"
HISTORY_LENGTH = 10
WAIT_TIME = 1


history = deque(maxlen=HISTORY_LENGTH)

# Set Master volume to 100%
os.system("amixer set Master 100%")

def get_random_wav():
    files = [f for f in os.listdir(SOUND_FOLDER) if f.endswith(".wav")]
    random.shuffle(files)
    return files

def select_wav():
    while True:
        files = get_random_wav()
        for wav_file in files:
            if wav_file in history:
                continue
            if wav_file == "015.wav":
                if random.randint(0,1) == 1:
                    print("skipping roar (015.wav)")
                    continue
                    
            return wav_file
        print("No valid WAV found, retrying...")
        
def play_wav(wav_path):
    # Load file
    y, sr = librosa.load(wav_path, sr=None, mono=True)

    # Shift pitch down 5 semitones (negative = down, positive = up)
    pitch_shift = random.randint(-7,0)
    print(f"shifting pitch by {pitch_shift} steps")
    y_shifted = librosa.effects.pitch_shift(y, sr=sr, n_steps=pitch_shift)

    # Play result
    sd.play(y_shifted, sr)
    sd.wait()

def main_loop():
    while True:
        wav_file = select_wav()
        history.append(wav_file)
        wav_path = os.path.join(SOUND_FOLDER, wav_file)
        print(f"Playing: {wav_file}")
        
        play_wav(wav_path)

        print(f"Finished {wav_file}")

        time.sleep(random.uniform(0,1))

if __name__ == "__main__":
    main_loop()
