/*7) Implemente um algoritmo de ordenação simples (como Bubble Sort) para um vetor
de inteiros usando ponteiros.
-A lógica que inverte dois elementos de lugar não pode estar dentro da função de
ordenação. Crie uma função auxiliar void swap(int *a, int *b).
-O algoritmo principal deve percorrer o vetor usando ponteiros, e sempre que
dois valores precisarem ser invertidos, seus endereços devem ser enviados para a
função swap*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubble_sort(int *vetor, int tam) {
    if (tam <= 0) return;

    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            

            if (*(vetor + j) > *(vetor + j + 1)) {
                

                swap((vetor + j), (vetor + j + 1));
                
            }
        }
    }
}

int main() {
    int tam = 0;

    printf("Defina o tamanho do vetor:\n");
    scanf("%d", &tam);

    int vetor[tam];

    printf("Defina os elementos do vetor:\n");
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }

   
    bubble_sort(vetor, tam);

    printf("\n======================================");
    printf("Vetor ordenado:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n======================================\n");

    return 0;
}