import cv2
from imutils.video import VideoStream

# Initialize video stream
vs = VideoStream(src=0, resolution=(1920, 1080)).start()

# Load face detector (Haar cascade or DNN model)
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Define screen resolution
screen_width, screen_height = 640, 480

while True:
    # Capture frame
    frame = vs.read()
    if frame is None:
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

    # Exit on keypress
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Cleanup
vs.stop()
cv2.destroyAllWindows()

