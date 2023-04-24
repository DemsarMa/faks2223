void setup() {
    int i;
    for (i = 13; i >= 5; i--) {
        pinMode(i, OUTPUT);
    }
}

char cifre[4][9] = {
    {1,1,1,1,1,1,0,0},
    {0,1,1,0,0,0,0,0},
    {1,1,0,1,1,0,1,0},
    {1,1,1,1,0,0,1,0}
};

void prikaziCifro(int cifra) {
    int i;
    for (i = 0; i < 8; i++) {
        if (cifre[cifra][i] == 1) {
            digitalWrite(13 - i, LOW);
        } else {
            digitalWrite(13 - i, HIGH);
        }
    }
}

void loop() {
    static int stej = 3;
    prikaziCifro(stej);
    stej--;
    if (stej < 0) {
        stej = 3;
    }
    delay(1000);
}