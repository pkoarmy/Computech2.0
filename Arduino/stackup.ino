
// Setup 2 ~ 13 PIN to on/off 12 LEDs
void setup() {
    for (int i = 2; i < 14; i++) {
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }
}

void loop() {
    for ( int j = 15; j > 0; j--) {
        for (int i = 2; i < j; i++) {
            
            digitalWrite(i, HIGH);
            digitalWrite(i - 1, LOW);
            delay(100);
        }
    }

}
