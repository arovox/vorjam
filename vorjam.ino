#include <Adafruit_NeoPixel.h>
#include "RF24.h"
#include <SPI.h>

// SPI Bus
SPIClass spiBus(FSPI);

RF24 radio1(7, 10, 16000000);  

#define PIN        21
#define NUMPIXELS  1
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void initRadios() {
  spiBus.begin(4, 5, 6);  // SCK=4, MISO=5, MOSI=6

  if (radio1.begin(&spiBus)) {
    Serial.println("Radio 1 okay");
    radio1.setAutoAck(false);
    radio1.stopListening();
    radio1.setRetries(0, 0);
    radio1.setPALevel(RF24_PA_MAX, true);
    radio1.setDataRate(RF24_2MBPS);
    radio1.setCRCLength(RF24_CRC_DISABLED);
    radio1.startConstCarrier(RF24_PA_MAX, 45);
  } else {
    Serial.println("Radio 1 failed");
  }
}

void btJam() {
  // random 0–80 (BT classic channels)
  radio1.setChannel(random(81));
  delayMicroseconds(random(60));  
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  initRadios();
  pixels.setPixelColor(0, pixels.Color(0, 5, 0));  
  pixels.show(); 
}

void loop() {
  //endless jam
  btJam();
}
