#include <stdio.h>
#include <malloc.h>

typedef struct{
    int peso;
    int altura;
} PesoAltura;
typedef int CHAVE;
 int main(){
    PesoAltura * pessoa1
    pessoa1 = (PesoAltura *) malloc(sizeof(PesoAltura));
    pessoa1-> peso = 80;
    pessoa1-> altura = 185;
    printf("peso: &i", pessoa1 -> peso);
    printf("\n");
    printf("altura: &i", pessoa1 -> altura);
    printf("\n");
    
    return 0;
 }