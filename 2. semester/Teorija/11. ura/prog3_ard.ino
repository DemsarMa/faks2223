#include <Arduino.h>

#define LED_PIN 7
#define TIPKA_PIN 10

void setup()
{
    unsigned int ms = 50;
    unsigned int div = (unsigned int)(16.384 * ms - 1);
    pinMode(LED_PIN, OUTPUT);
    pinMode(TIPKA_PIN, INPUT_PULLUP);
    REG_PIOC_IFER |= 1 << 29;
    REG_PIOC_DIFSR |= 1 << 29;
    REG_PIOC_SCDR = div;
}

int stanjeLED = 0;
int stanjeTipke = 0;
void loop()
{
    int tipka = digitalRead(TIPKA_PIN);
    if (tipka != stanjeTipke)
    {
        stanjeTipke = tipka;
        if (stanjeTipke == LOW)
        {
            stanjeLED = !stanjeLED;
            digitalWrite(LED_PIN, stanjeLED);
        }
    }
}
