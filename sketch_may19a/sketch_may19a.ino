#include <MeAuriga.h>
#include <Arduino.h>

MeRGBLed led_ring(0, 12);

void setup() {

    led_ring.setpin(44);
}

void loop() {
 
  for(byte i = 1; i<=12; i++) {

    led_ring.setColor(i, 0, 40, 0);
    led_ring.show();
    delay(100); 
  }

  for(byte e = 1; e<=12; e++) {

    led_ring.setColor(e, 0, 0, 0);
    led_ring.show();
    delay(100);
  }
}
