/*6) Crie um programa que contenha um array com cinco elementos inteiros. Leia esse
array do teclado e imprima o endereço das posições contendo valores pares.*/
#include <stdio.h>

int main(){

    int v[5];
    int *p = v;

    for(int i = 0; i < 5; i++){
        printf("Envie o valor do elemento v[%d]:", i);
        scanf("%d", &v[i]);
    }

    for(int j = 0; j < 5; j++){
        if(v[j] % 2 == 0){
            printf("Posicao %d com endereço %p\n", j, (p + j));
        }
    }

return 0;
}