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
….
8 : A, B, C, D, E, F, G
9 : A, B, G, F, C, D
 */

byte segmentArray[2][SEGMENT] = {
  //A, B, C, D, E, F, G
  //2, 3, 4, 5, 6, 7, 8
  {1, 1, 1, 1, 1, 1, 0}, // NUM 0
  {0, 1, 1, 0, 0, 0, 0}, // NUM 1
};

void setup() {
  for (int pin = START_PIN; pin < START_PIN + SEGMENT; pin++) {
    pinMode(pin, OUTPUT);
  }

  for(int digit = 0; digit < 2; digit++) { // DIGIT_NUM
    for(int segment = 0; segment < SEGMENT; segment++) { // 7 SEGMENT LED
      digitalWrite(START_PIN + segment, segmentArray[digit][segment]);
      delay(50);
    }
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}