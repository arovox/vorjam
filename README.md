# vorjam - Bt classic Jammer
Vorjam is a small BT classic jammer based on one nrf24 module.

## Disclaimer
This project is for educational purposes only. It's illegal to Jam other peoples devices without permission.

## Supported Boards:
Waveshare Esp32 S3 Zero

## Necessary Librarys:
### Install these Librarys over the Arduino library manager.
     NRF24 by TMRh20 and Avamander  
     Adafruit NeoPixel by Adafruit

## Flashing Instructions
1. You need the Arduino IDE or any other code editor with the Arduino Framework.
2. Install the additional Boards Manager with pasting this link into the preferences Tab:  
   https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
3. Copy the code into the editor and connect your Esp32 board.
4. Install the necessary Librarys over the lib manager.
6. Upload the code. When you see the red LED it works.

## Pinout NRF to Esp32 S3 Zero
The NRF is wired up to the Esp32 via SPI.
#### You can add more NRFs by editing the code.

 Pin on NRF | Pin on Esp32|
------------|-------------|
VCC         | GPIO4       |
GND         | GPIO17      |
GND         | GPIO22      |
CE          | D7          |
CSN         | D10         |
SCK         | D4          |
MO          | D6          |
MI          | D5          |

