#include <Arduino.h>

const int led[] = {4, 5, 6, 7};
const int nLeds = 4;

void setup()
{
    for (int i = 0; i < nLeds; i++)
    {
        pinMode(led[i], OUTPUT);
    }
}

int ledOn = 0;
void loop()
{
    for (int i = 0; i < nLeds; i++)
    {
        if (i == ledOn) digitalWrite(led[i], HIGH);
        else digitalWrite(led[i], LOW);
    }
    ledOn = (ledOn + 1) % (nLeds + 1);
    delay(300);
}
