#include <Servo.h>

Servo servoLeft;    // Declare left servo signal
Servo servoRight;   // Declare right servo signal

void setup() {
  servoLeft.attach(13);   // Attach left signal to pin 13
  servoRight.attach(12);    // Attach right signal to pin 12
  pinMode(5, INPUT);   // Controls left whisker
  pinMode(7, INPUT);   // Controls right whisker
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

// Functions Begin

void Backward(){
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
}

void Forward(){
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
}

void Right(){
  servoLeft.writeMicroseconds(2000);
  servoRight.writeMicroseconds(2000);
}

void Left(){
  servoLeft.writeMicroseconds(700);
  servoRight.writeMicroseconds(700);
}

// Functions end

void loop() {
  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);

  Serial.print(wLeft);
  Serial.println(wRight);

  delay(50);

  Forward();

  // if statements begin

  if (wLeft == 0 && wRight == 0){
    Backward();
    delay(500);
    Right();
    delay(280);
  }
  else if(wLeft == 0){
    Backward();
    delay(500);
    Right();
    delay(280);
    }
  else if(wRight == 0){
    Backward();
    delay(500);
    Left();
    delay(280);
  }
}
