#include <stdio.h>
#include <malloc.h>

int main() {

    int *j;
    j = (int *) malloc(sizeof(int)); // void * -> int *

    //printf("i: %p\n", i);
    printf("j: %p\n", *j);

    return 0;
}