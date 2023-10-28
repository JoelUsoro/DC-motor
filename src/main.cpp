#include <Arduino.h>
#define DCmotor 2
#define Forward 3
#define Backward 4

int i;
 
void setup() {
  //---set pin direction
  pinMode(DCmotor,OUTPUT);
  pinMode(Forward,OUTPUT);
  pinMode(Backward,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Start The Motors!");
  //---PWM example, full speed then slow

  for (i=255;i>100;i--) {
  digitalWrite(Forward,HIGH); //one way
  digitalWrite(Backward,LOW);
  analogWrite(DCmotor,i); //enable on
  delay(200);
  }
  for (i=100;i<255;i++) {
  digitalWrite(Forward,HIGH); //one way
  digitalWrite(Backward,LOW);
  analogWrite(DCmotor,i); //enable on
  delay(200);  
  }
}
