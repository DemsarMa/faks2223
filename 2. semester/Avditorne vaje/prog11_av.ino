void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

unsigned long start = millis();

void loop()
{
    int adc = analogRead(A0);
    Serial.println(adc);
    int frekvenca;
    if (adc < 400)
    {                    // very close
        frekvenca = 200; // ms
    }
    else if (adc <= 400 && adc > 200)
    {
        frekvenca = 500;
    }
    else
    {
        frekvenca = 2000;
    }

    static int ledStanje = LOW;
    /*digitalWrite(13, ledStanje);
    delay(frekvenca);
    ledStanje = !ledStanje;*/
    unsigned long now = millis();
    if (now - start > frekvenca)
    {
        digitalWrite(13, ledStanje);
        ledStanje = !ledStanje;
        start = now;
    }
}