#include <stdio.h>
#include <unistd.h>

int main (void){
  int pid = fork();
  printf("%d\n",pid);

  return 0;
}
