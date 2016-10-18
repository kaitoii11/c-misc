#include <stdio.h>

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  adds two integers with logic operators
 *
 * @Param x
 * @Param y
 *
 * @Returns  sum of two integers
 */
/* ----------------------------------------------------------------------------*/
int add(int x, int y){
  while( y != 0 ){
    int carry = x & y;
    x = x ^ y;
    y = carry << 1;
  }
  return x;
}

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  adds two integes with logic operators recursively
 *
 * @Param x
 * @Param y
 *
 * @Returns   sum of two integers
 */
/* ----------------------------------------------------------------------------*/
int addr(int x, int y){
  if( y == 0 ) return x;
  else  return addr((x^y), (x&y) << 1);
}

int main(int argc, char **argv){
  printf("%d\n", add(1,2));
  printf("%d\n", addr(1,2));

  return 0;
}

