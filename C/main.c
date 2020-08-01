#include <stdio.h>

#define NOTE_C 244

void play(int d) {
  printf("hello %d \n", d);
}

int main(void) {
  printf("Hello World\n");
  play(5);

  printf(" char size : %lu \n", sizeof(char));
  printf(" char size : %lu \n", sizeof(int));
  printf(" char size : %lu \n", sizeof(unsigned int));
  printf(" char size : %lu \n", sizeof(float));
  printf(" char size : %lu \n", sizeof(long));
  printf(" char size : %lu \n", sizeof(unsigned long));
  return 0;
}
