/*Crie uma função void inverte_vetor(int *vetor, int tamanho) que inverta a ordem dos
elementos de um vetor original.
-Você deve criar dois ponteiros locais dentro da função: um inicio apontando
para o primeiro elemento e um fim apontando para o último.
Faça um laço onde o inicio avança (++) e o fim recua (--) trocando os valores de
lugar até que os ponteiros se cruzem no meio do vetor. Não utilize variáveis
inteiras como índice.*/


void inverte_vetor(int *vetor, int tamanho){

    int *ini = vetor;
    int *end = vetor + (tamanho - 1);

    while(ini < end){

        int temp = *ini;

        *ini = *end;

        *end = temp;

        ini++;
        end--;

    }

}



#include <stdio.h>
#define TAM 5

int main(){

    int v[TAM] = {10,20,30,40,50};

    printf("Vetor original\n");

    for(int i = 0; i < TAM; i++){

        printf("%d\n", v[i]);
    }

    inverte_vetor(v, TAM);


    printf("Vetor apos a troca:\n");
    for(int i = 0; i < TAM; i++){
        printf("%d\n", v[i]);
    }

    return 0;
}