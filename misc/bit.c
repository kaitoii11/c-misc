#include <stdio.h>

int main(int argc, char **argv){
  printf("%o\n",3&2);
  printf("%o\n",3|2);
  printf("%o\n",3^2);
  printf("%o\n",~3);
  printf("%o\n",3<<2);
  printf("%o\n",3>>2);

  return 0;
}

