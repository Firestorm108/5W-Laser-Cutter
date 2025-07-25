#include <OneWire.h>
#include <DallasTemperature.h>

const int fan = 2;
const int fan2 = 3;
const int alarms = 4;
const int kill = 5;
const int temp = 6;
const float PANICtemp = 60.0; 

OneWire oneWire(temp);
DallasTemperature sensors(&oneWire);

void setup() {
  pinMode(fan, OUTPUT);
  pinMode(fan2, OUTPUT);
  pinMode(alarms, OUTPUT);
  pinMode(kill, OUTPUT);
  sensors.begin();
  digitalWrite(fan, HIGH);
  digitalWrite(fan2, HIGH);
  digitalWrite(alarms, LOW); 
  digitalWrite(kill, HIGH);   
}
void loop() {
  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);
  if (temperatureC >= PANICtemp) {
    digitalWrite(fan, LOW);
    digitalWrite(fan2, LOW);
    digitalWrite(alarms, HIGH);
    delay(2000); 
    digitalWrite(kill, LOW); 
  }
  delay(1000); 
}
