# Two-Servos_Task-3
This Arduino project controls two micro servo motors using one Arduino Uno. The servos are wired to rotate in opposite directions simultaneously, simulating mirrored motion. Built and tested in Tinkercad.

Circuit Description
The system consists of two micro servos connected to an Arduino Uno. Both servos share a power (5V) and ground connection from the Arduino, while each has its own signal pin:

Servo 1: Signal connected to Pin 9

Servo 2: Signal connected to Pin 10

This configuration allows the servos to operate simultaneously, but with independent motion control.

Files Included
fantabulous_snaget_hillar1.ino
The Arduino sketch used to control the servo motors. It includes a simple loop that drives both servos in opposing directions.

Fantabulous Snaget-Hillar.png
A circuit diagram created in Tinkercad showing the wiring layout for the project.


Behavior
Once the code is uploaded to the Arduino, both servos begin to move. While one servo rotates from 0° to 180°, the other simultaneously moves from 180° back to 0°. This synchronized but reversed motion creates a mirror-like effect.


How to Use
Open the .ino file in the Arduino IDE.

Wire your servos as shown in the diagram.

Upload the code to your Arduino Uno.

The servos will begin rotating in opposite directions in a continuous loop.

