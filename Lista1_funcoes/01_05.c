/*5 - Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito,
6 = 1 + 2 + 3, que são seus divisores). A função deve retornar o valor inteiro 1 para
verdadeiro e 0 caso contrário.*/

#include <stdio.h>


int ehPerfeito(int num){
    int soma = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            soma += i;
        }
    }

    if(soma == num){
        return 1;
    }

    return 0;
}

int main(){
    int num;

    printf("Digite um numero inteiro para verificar se e perfeito: \n");
    scanf("%d", &num);

    int resultado = ehPerfeito(num);

    if(resultado == 1){
        printf("O numero %d e perfeito!\n", num);
    }else{
        printf("O numero %d nao e perfeito!\n", num);
    }

    return 0;
}