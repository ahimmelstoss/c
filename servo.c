#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 

void setup() 
{ 
  myservo.attach(9);  
} 
 
void loop() 
{ 
  // with potentiometer
  int value = analogRead(A0);
  value = map(value, 0, 1023, 0, 179);
  myservo.write(value);
  delay(15);

  // pivot
/*
  static int state = 0;
  if (state) {
    state = 0;
     myservo.write(90);
  } else {
    state = 1;
    myservo.write(179);
  }
  delay(2000);
*/
}