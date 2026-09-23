/*6) Escreva uma função que procure a ocorrência de um vetor menor dentro de um vetor
maior.
-Assinatura: int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s);
A função deve procurar se a sequência exata de números do vetor sub existe
dentro de vetor. Se encontrar, retorne um ponteiro apontando para o início dessa
ocorrência no vetor original. Se não encontrar, retorne NULL*/

#include <stdio.h>


int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s){

    if(tam_s > tam_v || tam_s <= 0 || tam_v <= 0){
        return NULL;
    }

    for(int i = 0; i <= tam_v - tam_s; i++){

        int acheisapeca = 1;

        for(int j = 0; j < tam_s; j++){

            if(vetor[i + j] != sub[j]){
                acheisapeca = 0;
                break;
            }

        }

        if(acheisapeca == 1){
            return &vetor[i];
        }

    }

    return NULL;

}



int main(){

    int tam_v = 0, tam_s = 0;

    printf("Defina o tamanho do vetor maior:\n");
    scanf("%d", &tam_v);

    printf("Defina o tamanho do subvetor menor:\n");
    scanf("%d", &tam_s);

    int vetor[tam_v], subvetor[tam_s];

    printf("Defina os elementos do vetor maior:\n");
    for(int i = 0; i < tam_v; i++){

        scanf("%d", &vetor[i]);

    }
    printf("Defina os elementos do subvetor:\n");
    for(int i = 0; i < tam_s; i++){

        scanf("%d", &subvetor[i]);

    }

    int *final = busca_subvetor(vetor, tam_v, subvetor, tam_s);

    if(final != NULL){

        int i = final - vetor;

        printf("\n======================================");
        printf("\nRESULTADO: Sequencia encontrada!");
        printf("\nInicia no indice: %d", i);
        printf("\nEndereco de memoria retornado: %p", (void*)final);
        printf("\n======================================\n");
    } else {
        printf("\n======================================");
        printf("\nRESULTADO: Sequencia NAO encontrada.");
        printf("\n======================================\n");
    }

    return 0;

}
