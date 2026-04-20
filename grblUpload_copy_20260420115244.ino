#include <DHT.h>


#define DHTPIN 6 
#define DHTTYPE DHT11
#define SOILPIN 7
#define PUMPPIN 2

DHT dht(DHTPIN, DHTTYPE); // عملني object لي الحسلس عشان يطلع قرا 

// شغلت Serial و sensor 
// و خليت التربه input و pump output  
// وقافلت pump 


void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(SOILPIN, INPUT);
  pinMode(PUMPPIN, OUTPUT);
  
  // تأكد إنها مقفولة في البداية
  digitalWrite(PUMPPIN, HIGH); 
  delay(1000);
  Serial.println("Ready to Upload!");
}

void loop() {
  float t = dht.readTemperature();
  int soilStatus = digitalRead(SOILPIN);

 // بيجيب درجه الحراره 
 // و بيشوف التربه ناشفه ولا مبلوله 


  Serial.print("Temp: "); Serial.print(t);
  Serial.print("C | Soil: "); 

  // بيطبع درجه الحراره و حاله التربه 

  if (soilStatus == HIGH) { 
    Serial.println("DRY -> PUMP ON");
    digitalWrite(PUMPPIN, LOW); 
  } 
  else {
    Serial.println("WET -> PUMP OFF");
    digitalWrite(PUMPPIN, HIGH); 
  }
 // بنعمل if لو التربه ناشفه يزود مايه لو مبلوله يقفل  pump 
  delay(1000); 
}