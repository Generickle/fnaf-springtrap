#include <Servo.h>

#define LEFT_EYE_PIN 5
#define RIGHT_EYE_PIN 7
#define RIGHT_SERVO_PIN 12
#define LEFT_SERVO_PIN 13

Servo leftServo;  // Create servo object to control a servo
Servo rightServo;  // Create servo object to control a servo

void setup() {
  pinMode(LEFT_EYE_PIN, OUTPUT);
  pinMode(RIGHT_EYE_PIN, OUTPUT);

  rightServo.attach(RIGHT_SERVO_PIN);
  leftServo.attach(LEFT_SERVO_PIN);
}

void loop() {
  eyesFront();

  multipleBlinkingLights();

  delay(2000);

  eyesLeft();

  delay(500);

  eyesRight();

  delay(500);

  eyesFront();

  delay(5000);

  eyesLeft();

  delay(2000);

  eyesFront();

  delay(5000);

  multipleBlinkingLights();
  
  delay(5000);

  eyesRight();

  delay(2000);

  eyesFront();

  delay(5000);

  multipleBlinkingLights();

  delay(5000);
}

void turnONLights() {
  digitalWrite(LEFT_EYE_PIN, HIGH);
  digitalWrite(RIGHT_EYE_PIN, HIGH);
}

void turnOffLights() {
  digitalWrite(LEFT_EYE_PIN, LOW);
  digitalWrite(RIGHT_EYE_PIN, LOW);
}

void eyesFront() {
  rightServo.write(90);
  leftServo.write(90);
}

void eyesLeft() {
  rightServo.write(45);
  leftServo.write(45);
}

void eyesRight() {
  rightServo.write(135);
  leftServo.write(135);
}

void blinkingLights() {
  turnOffLights();
  delay(100);
  turnONLights();
}

void multipleBlinkingLights() {
  blinkingLights();

  delay(100);

  blinkingLights();

  delay(500);

  blinkingLights();
}