from flask import Flask, render_template
from std_msgs.msg import Bool
import os

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('mainpage.html')

@app.route('/start')
def start_robot():
    #start robot
    os.system('ros2 topic pub --once /trigger_message std_msgs/msg/Bool "data: true"')
    return render_template('triggeredpage.html')
    #return "Robot started:)"
    
if __name__ =='__main__':
    app.run(host='0.0.0.0')
