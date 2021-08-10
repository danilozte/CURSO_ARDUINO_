#include<Ticker.h>
#include "ENS210.h"
int resultado;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
 suma();
 Serial.print("el resultado es: ►");
 Serial.println(c);
 delay(400);
}
