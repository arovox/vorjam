#include <RF24/RF24.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>

RF24 radio(22, 0); // CE=GPIO22, CSN=CE0

void initRadios() {
    radio.begin();

    radio.stopListening();
    radio.setAutoAck(false);
    radio.setRetries(0, 0);
    radio.setPALevel(RF24_PA_MAX, true);
    radio.setDataRate(RF24_2MBPS);
    radio.setCRCLength(RF24_CRC_DISABLED);


    radio.startConstCarrier(RF24_PA_MAX, 45);
}

void hop() {
    uint8_t ch = rand() % 81;
    radio.setChannel(ch);


    usleep((rand() % 60));
}

int main() {
    srand(time(NULL));

    initRadios();

    while (true) {
        hop();
    }

    return 0;
}

