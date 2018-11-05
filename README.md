# IM69D130-Microphone-Shield2Go

Example of Infineon's highly sensitive [IM69D130](https://www.infineon.com/cms/de/product/sensor/mems-microphones/im69d130/) Microphone Shield2Go board for Arduino.

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
