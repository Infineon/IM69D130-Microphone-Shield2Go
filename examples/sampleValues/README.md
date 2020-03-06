# IM69D130-Microphone-Shield2Go

<img src="https://github.com/Infineon/Assets/blob/master/Pictures/IM69D130_Microphone_Shield2Go_Transformed_Resized.jpg" width=350>

## Summary
### Overview
The [IM69D130](https://www.infineon.com/cms/de/product/sensor/mems-microphones/im69d130/) is designed for applications where low self-noise (high SNR), wide dynamic range, low distortions and a high acoustic overload point is required. 
Infineon's Dual Backplate MEMS technology is based on a miniaturized symmetrical microphone design, similar as utilized in studio condenser microphones, and results in high linearity of the output signal within a dynamic range of 105dB. The microphone distortion does not exceed 1% even at sound pressure levels of 128dBSPL. The flat frequency response ( 28Hz low-frequency roll-off) and tight manufacturing tolerance result in close phase matching of the microphones, which is important for multi-microphone (array) applications.
With its low equivalent noise floor of 25dBSPL (SNR 69dB(A)) the microphone is no longer the limiting factor in the audio signal chain and enables higher performance of voice recognition algorithms. The digital microphone ASIC contains an extremely low-noise preamplifier and a high-performance sigma-delta ADC. Different power modes can be selected in order to suit specific current consumption requirements. Each IM69D130 microphone is calibrated with an advanced Infineon calibration algorithm, resulting in small sensitivity tolerances (± 1dB). The phase response is tightly matched (± 2°) between microphones, in order to support beamforming applications.

The IM69D130 Microphone Shield2Go takes the PDM output of the IM69D130 and converts it to I2S using an ADAU7002 IC. The voltage level of the Shield2Go is 3.3 V and it can be directly used with the XMC 2Go as it has the Shield2Go form factor with SPI replaced by I2S.

## Key Features and Applications
* Dynamic range of 105dB
    * Signal to noise ratio of 69dB(A) SNR
    * <1% total harmonic distortions up to 128dBSPL
    * Acoustic overload point at 130dBSPL
* Sensitivity (± 1dB) and phase (± 2° @1kHz) matched
* Flat frequency response with low frequency roll off at 28Hz
* Very fast analog to digital conversion speed (6µs latency @1kHz
* Power optimized modes determined by PDM clock frequency
* Package dimensions: 4mm x 3mm x 1.2mm
* PDM output
* Omnidirectional pickup pattern

### Applications
* Devices with Voice User Interface (VUI)
    * Smart speakers
    * Home automation
    * IOT devices
* Active Noise Cancellation (ANC) headphones and earphones
* High quality audio capturing
    * Conference systems
    * Cameras and camcorders
    * Industrial or home monitoring with audio pattern detection

## Usage
Please open the example sketch `sampleValues.ino` in this folder.

We will guide you now through using the provided examples with a IM69D130 Microphone Shield2Go in combination with an XMC 2Go.

### IM69D130 Microphone Shield2Go
The IM69D130 Microphone Shield2Go is a standalone break out board with Infineon's Shield2Go formfactor and pin out. You can connect it easily to any microcontroller of your choice which is Arduino compatible and has 3.3 V logic level (please note that the Arduino UNO has 5 V logic level and cannot be used without level shifting).
Please consult the [wiki](https://github.com/Infineon/IM69D130-Microphone-Shield2Go/wiki) for additional details about the board.

This board uses I2S and will block the SPI ports of the Shield2Go as they are redefined to be compatible with the Shield2Go formfactor.

Overall, the following SPI - I2S pin matching is in place:

* SPI:MISO -- I2S:DATA (INPUT)
* SPI:SCK -- I2S:BCLK
* SPI:SS -- I2S:LRCLK

However, every Shield2Go is directly compatible with Infineon's XMC 2Go and the recommended quick start is to use an XMC 2Go for evaluation. Therefore, please install (if not already done) also the [XMC-for-Arduino](https://github.com/Infineon/XMC-for-Arduino) implementation and choose afterwards **XMC1100 XMC2Go** from the **Tools**>**Board** menu in the Arduino IDE if working with this evaluation board. To use it, please plug the IM69D130 Microphone Shield2Go onto the XMC 2Go as shown below.

<img src="https://github.com/Infineon/Assets/blob/master/Pictures/IM69D130_S2Go_w_XMC2Go.png" width=250>

### Example
Before you can use the examples, ensure that you have installed Arduino as described [here](https://www.arduino.cc/en/Guide/Guide). Moreover, the [XMC-for-Arduino](https://github.com/Infineon/XMC-for-Arduino) integration is needed for the XMC 2Go and ensure that you have followed the instructions provided [here](https://github.com/Infineon/XMC-for-Arduino). Especially, ensure that you integrated the XMC boards into the Arduino IDE and that you have installed the [SEGGER J-Link](https://www.segger.com/downloads/jlink) software from the official [source](https://www.segger.com/downloads/jlink).
Moreover, ensure that you select the `XMC1100 XMC2Go` board from the Arduino IDE if you compile the examples.

#### Example `sampleValues`
This example is self-explanatory as it mainly reads out one single microphone and prints the data on the serial monitor. 
Just follow the instructions provided in the `sampleValues.ino` file, connect the stacked boards to the PC and press the `Upload` button. Select the related `COM` port from `Tools – Port` and open the serial plotter from `Tools - Serial Plotter` with the correct `COM` port and baudrate of `1000000` to see the data.
Please note that the serial plotter might get blocked if you flash the example and have selected the wrong baudrate. In this case, just unplug the board immediately with open serial plotter, select the respective baudrate, close the plotter, reattach the board and open the plotter once again.

## Known Issues and Additional Information

### Sampling Rate
Sampling rate can be too high to transfer the collected data via the serial interface. The XMC2Go has a maximum baudrate of around 1 MBaud and if the data cannot be transferred accordingly, an overflow will happen. This can be checked in the examples, but currently a maximum sampling rate of 11 kHz for a single microphone is possible with the provided examples.

### Additional Information
Please find the datasheet of the IM69D130 [here](https://www.infineon.com/dgdl/Infineon-IM69D130-DS-v01_00-EN.pdf?fileId=5546d462602a9dc801607a0e46511a2e). The product page can be found [here](https://www.infineon.com/cms/de/product/sensor/mems-microphones/im69d130/).
