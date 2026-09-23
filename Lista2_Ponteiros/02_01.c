/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços
e exiba o maior endereço.*/
#include <stdio.h>
int main(){

    int a = 10;
    int b = 20;
    int *pA = &a;
    int *pB = &b;

    printf("Endereco de A: %p\n", pA);
    printf("Endereco de B: %p\n", pB);  


    if(pA > pB){
        printf("O maior endereço e: %p\n", pA);
    }else{
        printf("O maior endereço e: %p\n", pB);
    }

return 0;
}