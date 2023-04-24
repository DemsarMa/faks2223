#include <Arduino.h>

#define LED 7;
#define TIPKA 10;

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(TIPKA, INPUT);
    Serial.begin(9600);
}

int stanjeLed = LOW;
int stanjeTipka = HIGH;
int stevec = 0;
void loop()
{
    int stanje = digitalRead(TIPKA);
    digitalWrite(LED, stanjeLed);
    delay(200);
    if (stanje != stanjeTipka)
    {
        stanjeTipka = stanje;
        if (stanje == LOW)
        {
            if (stanjeLed == LOW) stanjeLed = HIGH;
            else stanjeLed = LOW;
            stevec++;
            Serial.println(stevec);
        }
    }