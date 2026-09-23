/*2) Escreva uma função que receba um vetor de inteiros, seu tamanho e um número X
(informado pelo usuário). A função deve buscar X no vetor e retornar um ponteiro para
a primeira posição de memória onde X foi encontrado.
-Se X não estiver no vetor, a função deve retornar NULL.
-Apresente o resultado na main.*/

#include <stdio.h>

int* buscar_elemento(int *v, int tamanho, int x){

    int *p = v; //ponteiro auxiliar

    for(int i = 0; i < tamanho; i++){

        if(*p == x){
            return p;
        }
        p++;

    }
    return NULL;

}


int main(){

    int x, vet;

    printf("Defina o tamanho do vetor:\n");
    scanf("%d", &vet);

    int v[vet];

    printf("Defina os valores do vetor:\n");
    for(int i = 0; i < vet; i++){

        scanf("%d", &v[i]);

    }

    printf("Digite o numero X para buscar:\n");
    scanf("%d", &x);

    int *resultado = buscar_elemento(v, vet, x);


    if (resultado != NULL) {
        printf("O valor %d foi encontrado!\n", *resultado);
        printf("Endereco de memoria: %p\n", (void*)resultado);
        printf("Posicao no vetor (indice): %ld\n", resultado - v);
    } else {
        printf("\nO valor %d NÃO foi encontrado no vetor.\n", x);
    }

return 0;
}