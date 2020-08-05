/*
 * Please use this as a template of Homework #4
 * initially, this code won't work at all, so please correct with the statement
 * mentioned in the comment.
 */

#define RGB_PORT_RED 7
#define RGB_PORT_GREEN 8
#define RGB_PORT_BLUE 9

const int delay_led_light = 50;

void setup() {
  pinMode(RGB_PORT_RED, OUTPUT);
  pinMode(RGB_PORT_GREEN, OUTPUT);
  pinMode(RGB_PORT_BLUE, OUTPUT);
}

// implement this interface
// using a analogWrite() function each LED of RGB as well as individual LED
void rgb_light(int red_vaule, int green_value, int blue_value) {
  // just list up the LEDs or using for loop
  analogWrite();

  delay(delay_led_light);
}

// implement this interface
// We leanrned base change between 2base, 10base and Hexa base last week in the class
// 255(10) == 0xFF(16) == 1111 1111(2)
// so please implement the LED light up as this sequence
// 0. initially, will all OFF
// 1. Red with 0xFF only
// 2. Green with 0xFF only
// 3. Blue with 0xFF only
// 4. Red + Green with 0xFF
// 5. Green + Blue with 0xFF
// 6. Red + Blue with 0xFF
// 7. Red + Green + Blue with 0xFF
void loop() {
  // for example, if you want to only turn on Red LED.
  rgb_light(0xFF, 0x00, 0x00);
}
