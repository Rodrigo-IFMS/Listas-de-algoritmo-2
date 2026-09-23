/*8) Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as
duas datas.*/

#include <stdio.h>

int main(){

    struct data{
        int dia;
        int mes;
        int ano;
    };

    struct data data1, data2;

    printf("Digite a primeira data (dia, mes, ano):\n");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia, mes, ano):\n");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    // Calcular o número de dias entre as duas datas
    int dias1 = data1.dia + (data1.mes * 30) + (data1.ano * 365);
    int dias2 = data2.dia + (data2.mes * 30) + (data2.ano * 365);

    int diferenca = dias2 - dias1;

    printf("O número de dias entre as duas datas é: %d\n", diferenca);

}