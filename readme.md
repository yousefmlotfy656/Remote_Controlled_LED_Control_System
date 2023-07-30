Remote Controlled LED Control System
This project showcases a remote-controlled LED control system using an ESP8266-based board (NodeMcu) and the RemoteXY platform. The RemoteXY platform allows you to create a customizable mobile app to control the LEDs wirelessly over Wi-Fi or via a serial connection.

Components Required
To build the remote-controlled LED control system, you will need the following components:

ESP8266-based board (NodeMcu)
LEDs (Red LEDs)
Resistors (for LED dimming)
Push Buttons
Jumper Wires
Breadboard
Circuit Diagram
Follow the connections shown in the circuit diagram below to assemble the remote-controlled LED control system circuit:

    +---------------------------------------------------+
    |   +-------------------------------------------+   |
    |   |          Remote Controlled LED           |   |
    |   |               Control System             |   |
    |   +-------------------------------------------+   |
    |                                                   |
    |    +--------+    +--------+    +--------+         |
    |    | Button |    | Button |    | Button |         |
    |    |   1    |    |   2    |    |   3    |         |
    |    +---+----+    +---+----+    +---+----+         |
    |        |            |            |               |
    |        |            |            |               |
    |        v            v            v               |
    |   +--------+    +--------+    +--------+         |
    |   |        |    |        |    |        |         |
    |   |  LED   |    |  LED   |    |  LED   |         |
    |   |   1    |    |   2    |    |   3    |         |
    |   +--------+    +--------+    +--------+         |
    |        |            |            |               |
    |        |            |            |               |
    |        v            v            v               |
    |   +--------+    +--------+    +--------+         |
    |   |        |    |        |    |        |         |
    |   |  LED   |    |  LED   |    |  LED   |         |
    |   |   4    |    |   5    |    |   6    |         |
    |   +--------+    +--------+    +--------+         |
    |        |            |            |               |
    |        |            |            |               |
    |        v            v            v               |
    |   +--------+    +--------+    +--------+         |
    |   |        |    |        |    |        |         |
    |   |  LED   |    |  LED   |    |  LED   |         |
    |   |   7    |    |   8    |    |   9    |         |
    |   +--------+    +--------+    +--------+         |
    |        |            |            |               |
    |        |            |            |               |
    |        v            v            v               |
    |   +--------+    +--------+    +--------+         |
    |   |        |    |        |    |        |         |
    |   |  LED   |    |  LED   |    |  LED   |         |
    |   |   10   |    |   11   |    |   14   |         |
    |   +--------+    +--------+    +--------+         |
    |    |                |            |               |
    |    |                |            |               |
    |    v                v            v               |
    |   +--------+    +--------+    +--------+         |
    |   | Button |    | Button |    | Button |         |
    |   |   4    |    |   5    |    |   6    |         |
    |   +--------+    +--------+    +--------+         |
    |   +--------+    +--------+    +--------+         |
    |   | Button |    | Button |    | Button |         |
    |   |   7    |    |   8    |    |   9    |         |
    |   +--------+    +--------+    +--------+         |
    +---------------------------------------------------+

Pin Connections
Button 1: Connected to A7 Pin of NodeMcu

Button 2: Connected to A6 Pin of NodeMcu

Button 3: Connected to A5 Pin of NodeMcu

Button 4: Connected to A4 Pin of NodeMcu

Button 5: Connected to A3 Pin of NodeMcu

Button 6: Connected to A2 Pin of NodeMcu

LED 1: Connected to Digital Pin 52 of NodeMcu

LED 2: Connected to Digital Pin 50 of NodeMcu

LED 3: Connected to Digital Pin 48 of NodeMcu

LED 4: Connected to Digital Pin 46 of NodeMcu

LED 5: Connected to Digital Pin 44 of NodeMcu

LED 6: Connected to Digital Pin 42 of NodeMcu

LED 7: Connected to Digital Pin 40 of NodeMcu

LED 8: Connected to Digital Pin 38 of NodeMcu

LED 9: Connected to Digital Pin 36 of NodeMcu

LED 10: Connected to Digital Pin 34 of NodeMcu

Code Explanation
The provided Arduino code configures the ESP8266 board to work with the RemoteXY platform, allowing remote control of LEDs through the mobile app. The code reads the input from various buttons and toggles the state of the corresponding LEDs accordingly. The RemoteXY platform takes care of communication and synchronization between the app and the ESP8266 board.

Uploading the Code
Connect the NodeMcu to your computer, open the Arduino IDE, and upload the code to the board. Make sure you have selected the correct board and COM port in the Arduino IDE before uploading.

Mobile App Setup
To control the LEDs remotely, you need to create a mobile app using the RemoteXY platform. Follow the instructions provided by RemoteXY to create the app and configure the interface according to your specific LED control requirements.

Usage
After uploading the code and setting up the mobile app, you can remotely control the LEDs by interacting with the buttons on the app. The ESP8266 board will receive the button states from the app and adjust the LED states accordingly.

Enjoy experimenting with your Remote Controlled LED Control System! Customize the app and the interface to add more features and functionalities.