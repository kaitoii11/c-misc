#include <stdio.h>
#include <stdlib.h>


int glob1 = 123;
int glob2;

int main(){
    static int st1 = 123;
    static int st2;
    int local = 0;

    static char static_array[1024];
    char local_array[1024];
    char * dynamic_array;

    dynamic_array = (char *)malloc(1024);

    printf("----------- VAL -----------\n");
    printf("glob1   =>  %p\n", &glob1);
    printf("glob2   =>  %p\n", &glob2);
    printf("st1     =>  %p\n", &st1);
    printf("st2     =>  %p\n", &st2);
    printf("local   =>  %p\n", &local);
    printf("----------- ARR -----------\n");
    printf("static  =>  %p\n", static_array);
    printf("local   =>  %p\n", local_array);
    printf("dynamic =>  %p\n", dynamic_array);
    printf("----------- FUNC ----------\n");
    printf("main    =>  %p\n", main);
    printf("printf  =>  %p\n", printf);
}
