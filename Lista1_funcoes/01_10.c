/*10. Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
representará a operação que se deseja efetuar com os números. Assim, se o símbolo
for “ + ” , deverá ser realizada uma adição, se for “−”, uma subtração, se for “/”, uma 
divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da
operação para o programa principal.*/

#include <stdio.h>

float calculadora(float a, float b, char op){
    if(op == '+'){
        return a + b;
    }else if(op == '-'){
        return a - b;
    }else if(op == '*'){
        return a * b;
    }else if(op == '/'){
        if(b != 0){
            return a / b;
        }
        printf("Erro: divisao por zero!\n");
        return 0;
    }

    return 0;
}

int main(){
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);

    printf("Digite o simbolo da operacao (+, -, *, /): \n");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);

    resultado = calculadora(num1, num2, operacao);

    printf("O resultado da operacao e: %.2f\n", resultado);

    return 0;
}