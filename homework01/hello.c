#include <stdio.h>

int main() {

  // start of part 2
  printf("Hello, world!\n");

  int x = 2;
  int y = 3;

  printf("x = %d  y = %d  sum = %d\n", x, y, x+y);

  x = 110;
  printf("Decimal: %d, Hex: %x, ASCII: %c\n", x,x,x);

  x = 0x2C;
  printf("Decimal: %d, Hex: %x, ASCII: %c\n", x,x,x);

  x = 'z';
  printf("Decimal: %d, Hex: %x, ASCII: %c\n\n", x,x,x);

  // start of part 3
  printf("-1: %x, -2: %x, -3: %x\n", -1, -2, -3);

  printf("0x7ffffffe: %d, 0x7fffffff: %d\n", 0x7ffffffe, 0x7fffffff);
  printf("0x80000000: %d, 0x80000001: %d\n\n", 0x80000000, 0x80000001);
  return 0;
}
