#include <stdio.h>
#include <malloc.h>

int main(){
    int* y; // tipo ponteiro pra inteiro
    int tamanhoDeInteiro = sizeof(int);
    printf("Tamanho de inteiro: %i", tamanhoDeInteiro);
    printf("\n");
    void * pVoid;
    y = (int *) malloc(tamanhoDeInteiro);  // malloc retorna endereço
    pVoid = malloc(tamanhoDeInteiro);
    printf("pVoid: %p", pVoid);
    printf("\n");
    y = (int *) pVoid; //covertendo de ponteiro de void para ponteiro
    *y = 20;
    int z = sizeof(int);
    printf("*y=%i z=%i\n" , *y, z);
    return 0;
}