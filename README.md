# vorjam - Bt classic and WiFi Jammer
Vorjam is a compact and affordable wireless jammer for Bluetooth Classic and WiFi, built around one or two NRF24L01 modules. Designed for minimal hardware and plug-and-play deployment.

## Disclaimer
This project is intended for educational and research purposes only.  
Using radio frequency jamming devices may be illegal in your country or region.  
The author does not condone or encourage any unlawful use of this code or hardware.  
You are solely responsible for complying with local laws and regulations.  
The author assumes no liability for any damage, interference, or legal consequences 

## Supported Boards:
Waveshare Esp32 S3 Zero
Esp32 c3 super mini

## Necessary Libraries:
### Install these Libraries over the Arduino library manager.
     NRF24 by TMRh20 and Avamander  
     Adafruit NeoPixel by Adafruit

## Flashing Instructions

1. You need the Arduino IDE or any other code editor with the Arduino Framework.
2. Install the additional Boards Manager by pasting the following link into the Preferences tab:  
   https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
3. Copy the code into the editor and connect your ESP32 board.
4. Install the necessary libraries via the Library Manager.
5. **Important:** WiFi jamming is disabled by default.  
   To enable it, remove the `//` comment markers from the corresponding lines in the `loop()` section of the code.
6. Upload the code. When you see the red LED, it works.


## Pinout
The NRFs are wired up to the Esp32 via SPI.
#### The second NRF is deactivated by default. To activate it, remove the comment delimiters from the corresponding code sections.  
##### Waveshare Esp32 S3 Zero

| Pin on NRF | Pin on ESP32 (NRF1)| Pin on ESP32 (NRF2) |
|------------|--------------------|---------------------|
| VCC        | 3.3V               | 3.3V                |
| GND        | GND                | GND                 |
| CE         | D7                 | D20                 |
| CSN        | D10                | D21                 |
| SCK        | D4                 | D4                  |
| MO         | D6                 | D6                  |
| MI         | D5                 | D5                  |
|IRQ         | not used           | not used            |

#### Esp32 C3 Super-Mini
| Pin on NRF | Pin on ESP32 C3 (NRF1)| Pin on ESP32 C3 (NRF2) |
|------------|-----------------------|------------------------|
| VCC        | 3.3V                  | 3.3V                   |
| GND        | GND                   | GND                    |
| CE         | D9                    | D2                     |
| CSN        | D10                   | D3                     |
| SCK        | D7                    | D7                     |
| MO         | D6                    | D6                     |
| MI         | D5                    | D5                     |
|IRQ         | not used              | not used               |
## Jamming Capabilities

- **Bluetooth Classic** – supported since v0.0  
- **WiFi (2.4 GHz)** – supported since v0.1 (disabled by default)  
> It is recommended to run only one jammer at a time (either BT or WiFi), especially on low-power setups.  
> Running both simultaneously may reduce effectiveness or cause instability, depending on your hardware.  
> The BT classic jammer itselfs is also allone pretty effective against other protocols like BLE or WiFi


  
  
## Keywords
`nrf24l01` `esp32` `wifi jammer` `bluetooth jammer` `rf testing` `low-cost hardware`



