#include "RF24.h"
#include <SPI.h>

SPIClass spiBus(VSPI); //SPI bus

RF24 radio(4, 5); //NRF1
//RF24 radio2(2, 17); //NRF

int WiFiChannels[] = {12, 37, 62};
int WiFiindex;
int WiFichannel;

void initJamRadios() {
  //inititialize jam mode
  if (radio.begin(&spiBus)) {

    Serial.println("Radio 1 okay");
    radio.setAutoAck(false);
    radio.stopListening();
    radio.setRetries(0, 0);
    radio.setPALevel(RF24_PA_MAX, true);
    radio.setDataRate(RF24_2MBPS);
    radio.setCRCLength(RF24_CRC_DISABLED);
    radio.startConstCarrier(RF24_PA_MAX, 45);
  } else {
    Serial.println("Radio 1 failed");
  }
  /*if (radio2.begin(&spiBus)) {
     
    Serial.println("Radio 1 okay");
    radio2.setAutoAck(false);
    radio2.stopListening();
    radio2.setRetries(0, 0);
    radio2.setPALevel(RF24_PA_MAX, true);
    radio2.setDataRate(RF24_2MBPS);
    radio2.setCRCLength(RF24_CRC_DISABLED);
    radio2.startConstCarrier(RF24_PA_MAX, 45);
  } else {
    Serial.println("Radio 2 failed");
  }*/
}

void btJam() {
  // send on random channel of BT-classic
  radio.setChannel(random(81));
  //radio2.setChannel(random(80));
  
  delayMicroseconds(random(60));  
}

void WiFiJam(){
  //select channel
  WiFiindex = random(0, 3);
  WiFichannel = WiFiChannels[WiFiindex];

  //send
  radio.setChannel(WiFichannel);
  //radio2.setChannel(WiFichannel);
  
  delayMicroseconds(random(60));
}

void setup() {
  Serial.begin(115200);
  delay(1000);
  spiBus.begin(18, 19, 23, 5);

  initJamRadios();
}

void loop() {
  //choose what you want to jam
  btJam();
  //WiFiJam();
}
