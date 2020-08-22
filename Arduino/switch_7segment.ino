#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

#define START_PIN 2
#define DIGIT_NUM 10
#define SEGMENT 7
/*
 * 
 *  AAA
 * F   B
 *  GGG
 * E   C
 *  DDD
 * 
0 : A, B, C, D, E, F
1 : B, C
2 : A, B, G, E, D
3: A, B, G, C, D
4: , B, C, , , F, G
….
8 : A, B, C, D, E, F, G
9 : A, B, G, F, C, D
 */

byte segmentArray[DIGIT_NUM][SEGMENT] = {
  //A, B, C, D, E, F, G
  //2, 3, 4, 5, 6, 7, 8
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 0, 0, 1, 1}, // 9
};

void showDigitNum(int digit) {
  for(int segment = 0; segment < SEGMENT; segment++) { // 7 SEGMENT LED
    digitalWrite(START_PIN + segment, segmentArray[digit][segment]);
    delay(20);
  }  
}

void setup() {
  for (int i = START_PIN; i < START_PIN + SEGMENT; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

  for(int digit = 0; digit < DIGIT_NUM; digit++) { // DIGIT_NUM
    showDigitNum(digit);

    delay(100);
  }

  pinMode(11, INPUT_PULLUP);
}

void loop() {
  int i = digitalRead(11);

  if ( i == 0) {
    long randNumber = random(10);
    showDigitNum(randNumber);
  }

  delay(20);
  
}
