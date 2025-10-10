# vorjam - Bt classic Jammer
Vorjam is a small BT classic jammer based on one nrf24 module.

## Disclaimer
This project is intended for educational and research purposes only.  
Using radio frequency jamming devices may be illegal in your country or region.  
The author does not condone or encourage any unlawful use of this code or hardware.  
You are solely responsible for complying with local laws and regulations.  
The author assumes no liability for any damage, interference, or legal consequences 

## Supported Boards:
Waveshare Esp32 S3 Zero

## Necessary Libraries:
### Install these Librarys over the Arduino library manager.
     NRF24 by TMRh20 and Avamander  
     Adafruit NeoPixel by Adafruit

## Flashing Instructions
1. You need the Arduino IDE or any other code editor with the Arduino Framework.
2. Install the additional Boards Manager by pasting the following link into the preferences Tab:  
   https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
3. Copy the code into the editor and connect your Esp32 board.
4. Install the necessary Libraries over the lib manager.
6. Upload the code. When you see the red LED it works.

## Pinout NRF to Esp32 S3 Zero
The NRFs are wired up to the Esp32 via SPI.
#### The second NRF is deactivated by default. To activate it, remove the comment delimiters from the corresponding code sections.

| Pin on NRF | Pin on ESP32 (NRF1)| Pin onESP32 (NRF2)  |
|------------|--------------------|---------------------|
| VCC        | 3.3V               | 3.3V                |
| GND        | GND                | GND                 |
| CE         | D7                 | D20                 |
| CSN        | D10                | D21                 |
| SCK        | D4                 | D4                  |
| MO         | D6                 | D6                  |
| MI         | D5                 | D5                  |


