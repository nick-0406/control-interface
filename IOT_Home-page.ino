#include <DHT.h>
#include <DHT_U.h>


#define PIN_DHT 3
#define PIN_LED 2
DHT dht(PIN_DHT, DHT11);
String commande;
bool status = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  dht.begin();
  Serial.begin(9600);
  commande="";
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    commande = Serial.readStringUntil('\n');
    commande.trim();
  }
  manageQuery(commande);
}

void manageQuery(String data){
  if(data == "LIGHT_ON"){
    digitalWrite(PIN_LED,HIGH);
      status = true;
      Serial.println("OK");
  }
  else if(data == "LIGHT_OFF"){
    digitalWrite(PIN_LED,LOW);
      status = false;
      Serial.println("OK");
  }
  else if(data == "GET_LIGHT_STATUS"){
    if(status)
        Serial.print("LIGHT : ON");
    else
        Serial.print("LIGHT : OFF");
  }
  else if (data == "GET_TEMPERATURE")
    Serial.print(dht.readTemperature());
  else 
    Serial.println("UNKOWN COMMAND");

}