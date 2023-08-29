#include <stdio.h>

int main() {

  printf("Hello, world!\n");

  int x = 2;
  int y = 3;

  printf("x = %d  y = %d  sum = %d\n", x, y, x+y);

  x = 110;
  printf("Decimal: %d, Hex: %x, ASCII: %c\n", x,x,x);

  x = 0x2C;
  printf("Decimal: %d, Hex: %x, ASCII: %c\n", x,x,x);

  x = 'z';
  printf("Decimal: %d, Hex: %x, ASCII: %c\n", x,x,x);
  return 0;
}
