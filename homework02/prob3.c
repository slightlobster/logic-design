#include <stdio.h>

void disassemble(int ins);

int main() {

  disassemble(0xDADA);
  disassemble(0xFEED);
  disassemble(0xBABA);

  return 0;	
}

void disassemble(int ins) {
  int h1 = ins>>12;
  int h2 = (ins & 0x0F00)>>8;
  int h3 = (ins & 0x00F0)>>4;
  int h4 = ins & 0x000F;

  printf("opcode = %d  rw = %d  ra = %d  rb = %d\n", h1, h2, h3, h4);
}
