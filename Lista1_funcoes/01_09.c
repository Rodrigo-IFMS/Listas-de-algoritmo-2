/*9. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna
o valor de S.
S = 1 + 1/1! + ½! + 1/3! + 1 /N!*/

#include <stdio.h>

double calculaS(int N){
    double S = 1.0;
    double fat = 1.0;

    for(int i = 1; i <= N; i++){
        fat *= i;
        S += 1.0 / fat;
    }

    return S;
}

int main(){
    int N;
    double resultado;

    printf("Digite um valor inteiro e positivo para N: \n");
    scanf("%d", &N);

    resultado = calculaS(N);

    printf("O valor de S para N = %d e: %lf\n", N, resultado);

    return 0;
}