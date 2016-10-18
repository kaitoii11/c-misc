#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv){
  int opt;
    while((opt = getopt(argc, argv, "abcd:e:"))!= -1){
    printf("%c", opt);
      switch (opt){
        case 'a':
        case 'b':
        case 'c':
          printf("%c \n", opt);
          break;
        case 'd':
        case 'e':
          printf("%c \n", opt);
          break;
       case '?':
          if(optopt == 'd')
            printf("%c %s",optopt, optarg);
          else // optopt == 'e'
            printf("%c %s",optopt, optarg);
          break;
       default:
          printf("fuck you\n");
      }
    }

  return 0;
}

