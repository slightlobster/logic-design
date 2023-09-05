#include <stdio.h>

void test_overflow(int a, int b);

int main() {

  test_overflow(200,150);
  test_overflow(-100,-300);
  test_overflow(0x7fffffff,1);
  test_overflow(0x80000000,-1);
  test_overflow(0x7fffffff,0x80000000);

}

void test_overflow(int a, int b) {
  printf("Value A: 0x%x = %d\n", a, a);
  printf("Value B: 0x%x = %d\n", b, b);
  int c = a + b;
  printf("Sum: 0x%x = %d\n", c, c);

  a = a >> 31;
  b = b >> 31;
  c = c >> 31;

  int overflow = 0;
  //overflow occurs when both a and b have the same sign and the result does not
  //check for overflow if both numbers are positive
  if(a && b) {
	if(!c) overflow = 1;
  }

  //check for overflow if both numbers are negative
  else if(!a && !b) {
	if(c) overflow = 1;
  }

  if(overflow) printf("Overflow occured!\n\n");
  else printf("No overflow!\n\n");
}
