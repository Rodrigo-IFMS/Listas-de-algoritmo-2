/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/
#include <stdio.h>

void percorrervetor(int (*v)[3]){

    int *ini = *v;
    int *end = *v + 3;


    for(int *p = *v; p < end; p++){
    
        printf("%d \n", *p);

    }


}

int main(){

    int v[3];
    int *p;

    printf("defina os elementos do vetor:");

    for (int *p = v; p < v + 3; p++) {
        scanf("%d", p);
    }

    printf("Elementos do vetor que foram inseridos:\n");

    percorrervetor(&v);


    return 0;
}