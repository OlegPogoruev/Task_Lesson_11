#include <stdio.h>
int main(void)
{
  unsigned int a = 0x11223344;
  char i;
  for(i = 1; i < 5; ++i)
  {
    unsigned int temp;
    temp = (a >> (8*(4 - i))) & 0x000000FF;
    printf("byte %d number a = %x\n",(5 - i), temp);
  }
  
  printf("\nchange the number\n");
  a = (a & 0xFF00FFFF) + 0x00DD0000;
  for(i = 1; i < 5; ++i)
  {
    unsigned int temp;
    temp = (a >> (8*(4 - i))) & 0x000000FF;
    printf("byte %d number a = %x\n", (5 - i), temp);
  }
  
  return 0;
}
