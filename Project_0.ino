#include <Dhcp.h>
#include <Dns.h>
#include <Ethernet.h>
#include <EthernetClient.h>
#include <EthernetServer.h>
#include <EthernetUdp.h>
#include <ArduinoJson.h>

//byte mac[] = {0x09,0x07,0xBE,0xEF,0x05,0x02}; //Arbtitrary MAC address
//EthernetClient client;
//char serverName[] = "https://guarded-falls-36394.herokuapp.com/arduinoget";
//int serverPort = 80;

int hanger[6] = {1, 1, 1, 1, 1, 1};
int PIN_out1 = 8;
int PIN_out2 = 9;
int PIN_out3 = 10;
int PIN_out4 = 11;
int PIN_out5 = 12;
int state1 = HIGH;
int state2 = HIGH;
int state3 = HIGH;
int state4 = HIGH;
int state5 = HIGH;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_out1, OUTPUT);
  pinMode(PIN_out2, OUTPUT);
  pinMode(PIN_out3, OUTPUT);
  pinMode(PIN_out4, OUTPUT);
  pinMode(PIN_out5, OUTPUT);
 // if (Ethernet.begin(mac) == 0) {
   // Serial.println("Failed to configure Ethernet using DHCP"); 
  //}

  
}



void loop() {
  // put your main code here, to run repeatedly:

  

 // if (Serial.read()== 'j'){
   // DynamicJsonBuffer jBuffer;
   // JsonObject& root = jBuffer.createObject();

   // root["Yes"] = "success";
   // for(int i = 0; i < 6; i ++){
   //   root["Try"] = hanger[i];
   // }
   //  root.prettyPrintTo(Serial);
   //  Serial.println();
  //}
  digitalWrite(PIN_out1, state1);
  digitalWrite(PIN_out2, state2);
  digitalWrite(PIN_out3, state3);
  digitalWrite(PIN_out4, state4);
  digitalWrite(PIN_out5, state5);
  delay(1000);
  if (state1 == HIGH){
    state1 = LOW;
    state2 = LOW;
    state3 = LOW;
    state4 = LOW;
    state5 = LOW;
  }
  else{
    state1 = HIGH;
    state2 = HIGH;
    state3 = HIGH;
    state4 = HIGH;
    state5 = HIGH;
  }

  
}
