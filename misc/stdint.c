#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv){
  int8_t a = 255;
  int16_t b = 255;
  uint8_t c = -1;
  int i = 2;
  printf("%d %d %d\n",a*i,b*i,c*i);
  return 0;
}

