#include <Servo.h>

Servo servoLeft;          // Define left servo
Servo servoRight;         // Define right servo

void setup() { 
  servoLeft.attach(13);  // Set left servo to digital pin 10
  servoRight.attach(12);  // Set right servo to digital pin 9
}

  void backward() {
    servoLeft.write(0);
    servoRight.write(180);
  }

  void forward() {
  servoLeft.write(180);
  servoRight.write(0);
  }

  void turnRight() {
  servoLeft.write(180);
  servoRight.write(180);
}
void turnLeft() {
  servoLeft.write(0);
  servoRight.write(0);
}

void stopRobot() {
  servoLeft.write(90);
  servoRight.write(90);
}


// Motion routines for forward, reverse, turns, and stop

void loop() { 
  forward();
  delay(1000);// Loop through motion tests
  turnLeft();             // Example: move forward
  delay(800);           // Wait 2000 milliseconds (2 seconds)
  turnRight();
  delay(800);
  forward();
  delay(400);
  backward();
  delay(400);
  turnLeft();
  delay(3000);
  turnRight();
  delay(3000);
  forward();
  delay(3000);
  turnLeft();             // Example: move forward
  delay(800);           // Wait 2000 milliseconds (2 seconds)
  turnRight();
  delay(800);
  forward();
  delay(400);
  backward();
  delay(400);
  turnLeft();
  delay(3000);
  turnRight();
  delay(3000);
  backward();
  delay(3000);
  turnLeft();
  delay(300);
  turnRight();
  delay(300);
  turnLeft();
  delay(300);
  turnRight();
  delay(300);
  turnLeft();
  delay(300);
  turnRight();
  delay(300);
  turnLeft();
  delay(300);
  turnRight();
  delay(300);
  turnLeft();
  delay(300);
  turnRight();
  delay(300);
  
 
  exit(0);
 
}


