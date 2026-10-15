# Six-DOF Robotic Arm Simulation

<img src="https://github.com/daniel-odulate22/blob/main/six-dof-robo-arm-tinkercad.png" alt="img" />

A simulated six-degree-of-freedom (6-DOF) robotic arm controlled by six potentiometers and an Arduino Uno. Each potentiometer independently controls the position of one servo motor, demonstrating the relationship between analog inputs and servo motion.

## Project Overview

This project was completed as part of the **Aurora Robotics Educators Program (AEP), Robotic Arms Track**.

The objective was to apply concepts from Class 3, *Actuators & Servo Motion*, by simulating a six-joint robotic arm using six positional servo motors controlled by six potentiometers.

## Components Used

- Arduino Uno R3
- 6 micro servo motors configured for positional control
- 6 potentiometers
- Breadboard and jumper wires
- 4 × AA 1.5 V batteries for the servo supply
- Tinkercad Circuits for simulation

## How It Works

Each potentiometer acts as an input device for one servo motor.

1. The Arduino reads the potentiometer's analog voltage using `analogRead()`.
2. The analog reading, which ranges from 0 to 1023, is mapped to an angle between 0° and 180° using `map()`.
3. The `Servo` library sends the appropriate control signal using `servo.write()`.
4. The program continuously repeats this process for all six potentiometers and servos.

Turning a potentiometer changes the commanded angle of its corresponding servo.

## Pin Connections

### Servo Motors

| Servo | Arduino Signal Pin |
|---|---|
| Servo 1 | D3 |
| Servo 2 | D5 |
| Servo 3 | D6 |
| Servo 4 | D9 |
| Servo 5 | D10 |
| Servo 6 | D11 |

### Potentiometers

| Potentiometer | Arduino Analog Pin |
|---|---|
| Potentiometer 1 | A0 |
| Potentiometer 2 | A1 |
| Potentiometer 3 | A2 |
| Potentiometer 4 | A3 |
| Potentiometer 5 | A4 |
| Potentiometer 6 | A5 |

Each potentiometer's middle terminal (wiper) connects to its assigned analog input. Its outer terminals connect to 5 V and GND.

### Power Connections

- The Arduino is powered through its USB connection.
- The external battery pack supplies power to the servo motors.
- The servo grounds and Arduino ground share a common reference.
- The potentiometers use the Arduino's 5 V supply.

**Power note:** The simulated circuit uses four AA batteries rated at 1.5 V each. In a physical implementation, verify the servos' voltage ratings and the supply's current capacity. Six servos may require a suitably rated regulated supply.

## Code

The Arduino program is in [`six_dof_arm.ino`](six_dof_arm.ino).

The code uses arrays to associate each servo with its corresponding potentiometer, allowing all six joints to be controlled using a compact loop.

## Testing and Results

The circuit was tested in Tinkercad Circuits.

**Observed result:** All six servos responded to their corresponding potentiometers. Each potentiometer independently controlled its assigned servo.

This verified the basic analog-input-to-servo-control functionality of the simulated system.

## Concepts Demonstrated

- Analog input using `analogRead()`
- Mapping sensor values to an output range using `map()`
- Positional servo control using `Servo.write()`
- Arrays and loops in Arduino C++
- Microcontroller-based actuator control
- Coordinating multiple input and output components

## Limitations and Future Improvements

- The simulation demonstrates independent servo control rather than a complete mechanical robotic arm with a physical structure and gripper.
- The servos are controlled independently; coordinated movement and inverse kinematics are not implemented.
- A physical build would require careful power-supply sizing and mechanical assembly.

## Author

Daniel Alexander Odulate (me)

Aurora Robotics Educators Program (AEP) 2026  
Robotic Arms Track
