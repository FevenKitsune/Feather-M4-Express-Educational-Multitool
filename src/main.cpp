#include <Arduino.h>
#include "signalgenerator.hpp"

void setup() {
  SignalGenerator sig(5);
  sig.initializeDMAC();
  sig.populateBuffer(3000);
  sig.refreshDMAC();
}

void loop() {
  // put your main code here, to run repeatedly:
}