/*3) Crie um programa que contenha um array de float com 10 elementos. Imprima o
endereço de cada posição desse array.*/

#include <stdio.h>
int main(){
    float v[10];

    for(int i = 0; i < 10; i++){
        printf("Defina os elementos do array:");
        scanf("%f", &v[i]);
        float *p = &v[i];
        printf("O endereço de v[%d] e %p\n:", i, p);
    }




return 0;
}