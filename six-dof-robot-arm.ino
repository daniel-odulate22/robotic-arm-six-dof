#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// Servo signal pins
const int servoPins[6] = {3, 5, 6, 9, 10, 11};

// Potentiometer analog pins
const int potPins[6] = {A0, A1, A2, A3, A4, A5};

// Store the potentiometer readings and servo angles
int potValue[6];
int servoAngle[6];

Servo* servos[6] = {
  &servo1, &servo2, &servo3,
  &servo4, &servo5, &servo6
};

void setup() {
  for (int i = 0; i < 6; i++) {
    servos[i]->attach(servoPins[i]);
  }
}

void loop() {
  // Read each potentiometer and control its servo
  for (int i = 0; i < 6; i++) {
    potValue[i] = analogRead(potPins[i]);

    // Convert the reading (0-1023) to an angle (0-180)
    servoAngle[i] = map(potValue[i], 0, 1023, 0, 180);

    servos[i]->write(servoAngle[i]);
  }

  delay(15);
}