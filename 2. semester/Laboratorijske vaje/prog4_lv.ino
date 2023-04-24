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

unsigned long lastDebounceTime = 0; // the last time the output pin was toggled
unsigned long debounceDelay = 50;   // the debounce time; increase if the output flickers

void setup() {

  // Set encoder pins as inputs
  pinMode(outputA, INPUT);
  pinMode(outputB, INPUT);
  pinMode(button, INPUT_PULLUP);

  // Setup Serial Monitor
  Serial.begin(9600);
  counter = 1;
}

void loop() {
  
  // Read the current state of outputA
  currentStateA = digitalRead(outputA);
  // If last and current state of outputA are different, then pulse occurred
  // React to only 1 state change to avoid double count
  if (currentStateA != lastStateA && currentStateA == 1) {

    // If the outputB state is different than the outputA state then
    if (digitalRead(outputB) != currentStateA) {
      counter--;
      currentDir = "Levo";
    } else if (digitalRead(outputB) == currentStateA) {
      // Encoder is rotating CW so decrement
      counter++;
      currentDir = "Desno";
    }
    if(counter == 0){
      Serial.println("Smer: Sredina");
      }
      else{
    analogWrite(led, counter);
    Serial.print("Smer: ");
    Serial.print(currentDir);
    Serial.print(" | Zamik: ");
    Serial.println(counter);}
  }

  // Check if the button is pressed
  int reading = digitalRead(button);

  // If button state changed
  if (reading != btnb) {
    // Reset the debouncing timer
    lastDebounceTime = millis();
  }

  // Check if enough time has passed to consider it a valid button press
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // If the button state has changed
    if (reading != btn) {
      btn = reading;
      
      // Only trigger when the new button state is LOW
      
      if (btn == LOW) {
        Serial.println("Button pressed");
        digitalWrite(outputLed, currentStateA);
        delay(500);
        digitalWrite(outputLed, LOW);
      }
    }
  }

  btnb = reading;
  // Remember last outputA state
  lastStateA = currentStateA;
  delay(1);
}