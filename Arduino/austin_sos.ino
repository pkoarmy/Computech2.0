#define NOTE_C4  262
int melody[] = {
  NOTE_C4, NOTE_C4, 
};
int buzzer=8;

void longSignal() {
  for (int x=0;x<4;x++){  
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)    
    tone(buzzer,1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);

    
  }
}

/* will do following below steps
 * LED ON -> SOUND ON -> DELAY(200) -> LED OFF -> SOUND OFF -> DELAY(200)
 * 
 * 3 times ShortSinal means, it is standing for "S"
 */
void ShortSignal() {
  // first, S has 3times playing sounds and LED on/off steps, so it must be 0, 1, 2 == > 3steps
  for (int x=0; x<3; x++) {
    // LED ON
    digitalWrite(LED_BUILTIN, HIGH);
    // SOUND ON
    tone(buzzer,100);
    // DELAY(100)
    delay(200);

    // LED OFF
    digitalWrite(LED_BUILTIN, LOW);
    // SOUND OFF
    noTone(buzzer);
    // DELAY(200)
    delay(200);
  }
}

void setup() {
  // missed this one
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  ShortSignal();
  delay(1000);
  //longSignal();
  //ShortSignal();
}
