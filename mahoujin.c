#include <stdio.h>
#include <stdlib.h>

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis creates magic square for odd numbers
 *
 * @Param N length of magic square
 *
 * @Returns array of magic square
 */
/* ----------------------------------------------------------------------------*/
int** mahoujin(int N){
  int **jin = (int**) malloc(sizeof(int*)*N);
  for(int i = 0; i < N; i++){
    jin[i] = (int*) malloc(sizeof(int)*N);
  }

  int t = 1;
  int j = N / 2;
  int i = N - 1;

  while(t <= N * N){
    for(int i = 0; i< N; i++){
      for(int j = 0; j < N; j++){
        printf("%2d ",jin[j][i]);
      }
      printf("\n");
    }

    printf("\n");

    if(jin[j][i] == 0){
      jin[j][i] = t;
      t++;
    }
    int k = i+1;
    int l = j+1;
    if(k >= N){
      k=0;
    }
    if(l >= N){
      l=0;
    }
    if(jin[l][k] == 0){
      i = k;
      j = l;
    } else {
      i--;
      if(i < 0){
        i = N-1;
      }
    }
  }

  return jin;
}

int main(int argc, char **argv){
  int N = 5;
  int **jin = mahoujin(N);

  for(int i = 0; i< N; i++){
    for(int j = 0; j < N; j++){
      printf("%2d ",jin[j][i]);
    }
    printf("\n");
  }
  for(int i = 0; i < N; i++){
    free(jin[i]);
  }
  free(jin);
  return 0;
}

