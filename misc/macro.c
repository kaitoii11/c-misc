#include <stdio.h>

int main(int argc, char **argv){
  printf("File %s \n", __FILE__);
  printf("Line %d \n", __LINE__);
  printf("Function %s \n", __func__);
  printf("compile date  %s \n", __DATE__);
  printf("compile time %s \n", __TIME__);
  printf("timestamp %s \n", __TIMESTAMP__);
  return 0;
}

