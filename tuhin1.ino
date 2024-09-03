#include <Wire.h>
#define tempPin A0
int relay1 = 2;
int relay2 = 3;
void setup() {

pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
digitalWrite(relay1, HIGH);
digitalWrite(relay2, HIGH);
Serial.begin(9600);

}
void loop() {
  
  int sensorValue = analogRead(tempPin);
  float voltage = sensorValue * (5000 / 1024.0);
  float temperature = voltage / 10;
  Serial.println(temperature);
  delay(500);
 if(temperature>=50)
digitalWrite(relay1, HIGH);
 else
  digitalWrite(relay1, LOW);
}
