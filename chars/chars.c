#include <conio.h>
#include <stdio.h>

int main() {
  int i;
  clrscr(); // clear screen
  printf("ASCII ==> Character\n");
  for (i = -128; i <= 127; i++) {
    printf("%d   ==>      %c\n", i, i);
  }
  getchar();
  return 0;
}