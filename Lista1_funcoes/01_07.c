/*7. Faça uma função que leia um número não determinado de valores positivos e retorna
a média aritmética dos mesmos.*/

#include <stdio.h>

float mediaValores(){
    float val = 0, soma = 0;
    int qtd = 0;

    printf("Digite um valor positivo: \n");
    scanf("%f", &val);

    while(val > 0){
        soma += val;
        qtd++;
        printf("Digite um valor positivo: \n");
        scanf("%f", &val);
    }

    if(qtd > 0){
        return soma / qtd;
    }

    return 0;
}

int main(){
    float media = mediaValores();

    printf("A media e: %.2f\n", media);

    return 0;
}