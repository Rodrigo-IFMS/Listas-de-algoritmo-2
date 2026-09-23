/*2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>
int main(){

    int a;
    int b;
    printf("Defina o valor das variaveis a e b:");
    scanf("%d %d", &a,&b);

    int *pA = &a;
    int *pB = &b;


    printf("Endereco de A: %p\n", pA);
    printf("Endereco de B: %p\n", pB);  

    if(pA > pB){
        printf("O conteudo do maior endereco e: %d\n", *pA);
    }else{
        printf("O conteudo do maior endereço e: %d\n", *pB);
    }

return 0;
}