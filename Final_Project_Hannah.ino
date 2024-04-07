
#include <Servo.h>

Servo mymotor; 

void setup() {
  Serial.begin(9600);// setup Serial Monitor to display information
  pinMode(2, INPUT);// Input from sensor
  mymotor.attach(8); // motor uses pin 8
}

void loop() {
  int motion =digitalRead(2);
  Serial.println(motion);
  
  
  if(motion == 1){
    mymotor.write(180);
  }
  
  else{
     mymotor.write(0);
  }
  
  delay(500);

}
 
