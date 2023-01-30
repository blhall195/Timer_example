
// constants won't change. Used here to set a pin number:
const int ledPin =  LED_BUILTIN;// the number of the LED pin

int ledState = LOW;             
unsigned long previousMillis = 0;        
bool button = 0;
const long interval = 1000;           


void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {

  unsigned long currentMillis = millis();

  button = 1;

  delay(500); //replace with loop that doesn't exit till the rising edge is detected. 

  button = 0;

  if (currentMillis - previousMillis <= interval) {
    ledState = HIGH; //replace with get/save/broadcast measurement 
  } else {
    ledState = LOW; //replace with function that puts everything into deep sleep mode 
  }
  
  digitalWrite(LED_BUILTIN, ledState);

  previousMillis = currentMillis;

}
