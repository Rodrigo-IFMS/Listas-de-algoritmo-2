/*8. Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
somatório de 1 até n: 1 + 2 + 3 + ... + n.*/

#include <stdio.h>

int somatorio(int n){
    int soma = 0;

    for(int i = 1; i <= n; i++){
        soma += i;
    }

    return soma;
}

int main(){
    int n, resultado;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    resultado = somatorio(n);

    printf("O somatorio de 1 ate %d e: %d\n", n, resultado);

    return 0;
}