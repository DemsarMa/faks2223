#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int st[] = [38, 39, 40, 41];
int vr[] = [42, 43, 44, 45];

void setup()
{
    lcd.begin(16, 2);
    for (int i = 0; i < 4; i++)
    {
        pinMode(st[i], INPUT_PULLUP);
    }
}

void izberiVrstico(int v) {
    for (int i = 0; i < 4; i++)
    {
        if (i == v)
        {
            pinMode(vr[i], OUTPUT);
            digitalWrite(vr[i], LOW);
        }
        else
        {
            pinMode(vr[i], INPUT);
        }
    }
}

void loop()
{
    for (int v = 0; v < 4; v++) {
        izberiVrstico(v);
        lcd.setCursor(0, v);
        for (int s = 0; s < 4; s++) {
            if (digitalRead(st[s]) == LOW) {
                lcd.print("#");
            } else {
                lcd.print(".");
            }
        }
    }
}
