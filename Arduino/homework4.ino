void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

const int delay_light = 50;

void rgb_light(int r, int g, int b) {
  analogWrite(7, r);
  analogWrite(8, g);
  analogWrite(9, b);
  delay(delay_light);
}

void loop() {
  rgb_light(0xFF, 0x00, 0x00);
  rgb_light(0x00, 0xFF, 0x00);
  rgb_light(0x00, 0x00, 0xFF);

  // R + G
  rgb_light(0xFF, 0xFF, 0x00);
  // G + B
  rgb_light(0x00, 0xFF, 0xFF);
  // R + B
  rgb_light(0xFF, 0x00, 0xFF);
  // R + G + B
  rgb_light(0xFF, 0xFF, 0xFF);
}