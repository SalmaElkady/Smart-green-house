#include <DHT.h>


#define DHTPIN 6 
#define DHTTYPE DHT11
#define SOILPIN 7
#define PUMPPIN 2

DHT dht(DHTPIN, DHTTYPE); 



void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(SOILPIN, INPUT);
  pinMode(PUMPPIN, OUTPUT);
  

  digitalWrite(PUMPPIN, HIGH); 
  delay(1000);
  Serial.println("Ready to Upload!");
}

void loop() {
  float t = dht.readTemperature();
  int soilStatus = digitalRead(SOILPIN);




  Serial.print("Temp: "); Serial.print(t);
  Serial.print("C | Soil: "); 



  if (soilStatus == HIGH) { 
    Serial.println("DRY -> PUMP ON");
    digitalWrite(PUMPPIN, LOW); 
  } 
  else {
    Serial.println("WET -> PUMP OFF");
    digitalWrite(PUMPPIN, HIGH); 
  }

  delay(1000); 
}
