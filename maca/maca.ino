#include <Encoder.h>

#define pulsosRotacao 720
#define pulsosNoventa 900

byte enc[2] = {18, 19};
byte IN[4] = {2, 3, 4, 5};
byte EN[2] = {6, 7};

Encoder encoder(enc[0], enc[1]);

void setup() {

  setarPinos();
  Serial.begin(9600);

}

void loop() {

  

}
