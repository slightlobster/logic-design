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

  // start of part 4
  int c = 0xffffffff;
  printf("0xffffffff as unsigned int: %u\n\n", c);

  // start of part 5
  int a = 0x3;
  int b = 0x5;
  printf("a = %x", a);
  printf("a & b = %x\n", a & b);
  printf("not a = %x\n", ~a);
  printf("a | b = %x\n", a | b);

  // and/or masking
  printf("a & 0x0000000f = %x\n", a & 0x0000000f); 
  printf("a & 0xfffffff0 = %x\n\n", a | 0xfffffff0);
 
  //start of part 6
  int z = 12;
  
  //left shift
  printf("int 12 << 1 = 0x%x = 0d%d\n", z << 1, z << 1);

  //right shift
  printf("int 12 >> 1 = 0x%x = 0d%d\n", z >> 1, z >> 1);
  z = -12;
  printf("int -12 >> 1 = 0x%x = 0d%d\n", z >> 1, z >> 1);

  //using unsigned ints
  unsigned int n = 12;
  printf("unsigned int 12 << 1 = 0x%x = 0d%u\n", n << 1, n << 1);
  printf("unsigned int 12 >> 1 = 0x%x = 0d%u\n", n >> 1, n >> 1);
  n = -12;
  printf("unsigned int -12 >> 1 = 0x%x = 0d%u\n", n >> 1, n << 1);
  

  return 0;
}
