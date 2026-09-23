/*5) Crie um programa que contenha um array de inteiros com cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro
de cada valor lido.*/
#include <stdio.h>
int main(){

    int v[5];
    int *p = v;

    for(int i = 0; i < 5; i++){
        scanf("%d", (p+i));
    }

    for(int i = 0; i < 5; i++){
        printf("elemento %d, %d\n", i, *(p+i) * 2);
    }


return 0;
} 