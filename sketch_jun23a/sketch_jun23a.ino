#include <MeAuriga.h>
#include <Arduino.h>

int poti; //A8 und A13, Port 8
int hel; //A7 und A12, Port 9

MeRGBLed led_ring(0, 12);

void setup() {

    led_ring.setpin(44);
}

void loop() {
 
  for(byte i = 1; i<=12; i++) {

    poti = analogRead(13) / 2;
    hel = analogRead(12) / 15; 

    led_ring.setColor(i, 0, hel, 0);
    led_ring.show();
    delay(poti); //100
  }

  for(byte e = 1; e<=12; e++) {

    poti = analogRead(13) / 2; 
    hel = analogRead(12) / 15;

    led_ring.setColor(e, 0, 0, 0);
    led_ring.show();
    delay(poti); //100
  }
}
