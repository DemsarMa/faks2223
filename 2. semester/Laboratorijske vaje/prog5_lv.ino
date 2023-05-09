#define outputLed 13
#define outputA 2  //DT
#define outputB 3 //CLK
#define button 8  //SW
#define led 11

int counter = 0;
int currentStateA = 0;
int lastStateA;
int btn = 0;
int btnb;
int i = 0;
String currentDir = "";
char TEKST[100] = "";
char *ptext = TEKST;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {

  // Set encoder pins as inputs
  pinMode(outputA, INPUT);
  pinMode(outputB, INPUT);
  pinMode(button, INPUT_PULLUP);

  // Setup Serial Monitor
  Serial.begin(9600);
  counter = 66;
}

void loop() {
  
  currentStateA = digitalRead(outputA);
  if (currentStateA != lastStateA && currentStateA == 1) {
    Serial.print("Beseda: ");
    Serial.println(TEKST);
    if (digitalRead(outputB) != currentStateA) {
      counter++;
      currentDir = "Desno";
    } else if (digitalRead(outputB) == currentStateA) {
      counter--;
      currentDir = "Levo";
    }
    if(counter == 0){
      Serial.println("Smer: Sredina");
      }

    if(counter < 65){
      counter = 90;
    }
    else if(counter > 90){counter = 65;}
    Serial.print("Trenutna črka: ");
    Serial.write(counter);
    Serial.println();
  }

  int reading = digitalRead(button);

  if (reading != btnb) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != btn) {
      btn = reading;
            
      if (btn == LOW) {
        *ptext = (char)counter;
        ptext++;
        Serial.print("Beseda: ");
        Serial.println(TEKST);
        digitalWrite(outputLed, currentStateA);
        //delay(500); //in case you want to see the led blink and have the slow typing effect
        digitalWrite(outputLed, LOW);
      }
    }
  }

  btnb = reading;
  lastStateA = currentStateA;
  delay(1);
}