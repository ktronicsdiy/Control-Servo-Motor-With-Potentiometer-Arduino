#include <Servo.h>

int val = 0;
int pot = A0;
int pos = 0;

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(2);
  myServo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(pot);
  pos = map(val, 0,1023, 0, 180);

  myServo.write(pos);
  delay(30);
  

}
