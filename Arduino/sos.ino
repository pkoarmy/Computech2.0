/*
*/

#define BUZZER_PORT 8
#define C_NOTE 262

bool isPlaying = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Ready!");

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUZZER_PORT, OUTPUT);
}

void play(int d) {
  if (!isPlaying) {
    return;
  }

  digitalWrite(LED_BUILTIN, HIGH);
  tone(BUZZER_PORT, C_NOTE);
  delay(d);

  digitalWrite(LED_BUILTIN, LOW);
  noTone(BUZZER_PORT);
  delay(d);
}

void longSignal() {
  play(500);
}

void shortSignal() {
  play(200);
}


void loop() {
  char a = Serial.read();

  if (a == '0') {
    Serial.println("Not Playing");
    isPlaying = false;
  }
  if (a == '1') {
    Serial.println("Playing ... ");
    isPlaying = true;
  }

  for (int i = 0; i<3; i++) {
    shortSignal();
  }
  delay(400);
  for (int i = 0; i<3; i++) {
    longSignal();
  }
  delay(100);
  for (int i = 0; i<3; i++) {
    shortSignal();
  }
  delay(1000);
}
