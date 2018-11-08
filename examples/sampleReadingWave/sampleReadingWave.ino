#include <I2S.h>

/*
 * This example reads audio data from one microphone of Infineon's IM69D130 Microphone Shield2Go 
 * and prints it as binary values on the serial monitor for being processed as raw binary data.
 * 
 * Part of this example is a Python script which takes the data and saves it as a wave file.
 * 
 * Author: Manuel Hollfelder
 */

void setup()
{
  Serial.begin(1000000);
  Serial.println("Begin of I2S microphone");
  // Disable all microphones
  I2S.disableMicrophones();
  // Enable the microphone when word select is low - only one microphone is used
  I2S.enableMicrophoneLow();
  // Start I2S with I2S_PHILIPS_MODE, 12 kHz sampling rate and 20 bits per sample
  // Returns 0 if everything okay, otherwise value > 0
  I2S.begin(I2S_PHILIPS_MODE, 11000, 20);
}

void loop()
{
  while (I2S.available() > 0)
  {
    // Read one value from the internal buffer and return it on the Serial monitor
    uint32_t buffer = I2S.read();
    // We send the buffer bytewise with byteorder big
    for(int i = 2; i >= 0; i--){ 
      Serial.write(uint8_t(buffer >> i*8));
    }
    // Send newline as separator
    Serial.print('\n');
    // If we have an overflow, we will see it on the Serial monitor
    // Check the values for overflow beforehand and if so flush the buffer
    if(I2S.getOverflow() == true){
      Serial.println("Overflow");
      I2S.flush();
    }
  }
}
