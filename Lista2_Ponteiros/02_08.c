/*Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

void preencherovetor(int (*vetor)[5], int valor) {

    int *ini = *vetor;
    int *end = *vetor + 5;

    for( int *p = *vetor; p < end; p++){

        *p = valor;

    }


}


int main(){

    int vetor[5];
    int v = 0;

    printf("Defina o valor que sera colocado no vetor a partir de ponteiros:\n");
    scanf("%d", &v);

    preencherovetor( &vetor, v);
    
    printf("Valores do vetor:\n");

    for(int i = 0; i < 5; i++){

        printf("=(%d)=\n", vetor[i]);

    }


}