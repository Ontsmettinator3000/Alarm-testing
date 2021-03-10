#include <Arduino.h>
#include "XT_DAC_Audio.h"
#include "SoundData.h"

XT_Wav_Class Sound(Rick);
XT_DAC_Audio_Class DacAudio(25,0);
uint32_t DemoCounter=0;

void setup() {
  // put your setup code here, to run once:
      Serial.begin(115200);
}

void loop() {
// put your main code here, to run repeatedly:
DacAudio.FillBuffer();               
  if(Sound.Playing==false) 
    DacAudio.Play(&Sound);      
  Serial.println(DemoCounter++);      
}
