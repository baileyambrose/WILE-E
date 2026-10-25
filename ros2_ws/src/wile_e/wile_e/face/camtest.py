import cv2

# Open a connection to the camera (default camera ID is 0)
cap = cv2.VideoCapture(0)

# Check if the camera opened successfully
if not cap.isOpened():
    print("Error: Could not open camera.")
    exit()

print("Press 'q' to quit.")

# Loop to capture frames
while True:
    ret, frame = cap.read()
    
    if not ret:
        print("Error: Unable to read frame.")
        break

    # Display the frame
    cv2.imshow("Camera Test", frame)

    # Break the loop if 'q' is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the camera and close the window
cap.release()
cv2.destroyAllWindows()

