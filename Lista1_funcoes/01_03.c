/*3 - Faça um procedimento que recebe por parâmetro o tempo de duração de uma fábrica
expressa em segundos e imprima esse tempo em horas, minutos e segundos*/
#include <stdio.h>


void calc(int Tsegundos){

    int segundos = 0, minutos = 0, horas = 0;

    horas = (Tsegundos / 3600);
    minutos = ((Tsegundos %  3600) / 60);
    segundos = (Tsegundos % 60);

    printf("Tempo formatado: %02dh:%02dm:%02ds\n", horas, minutos, segundos);
}



int main(){

    int tS = 0, h = 0, m = 0;

    printf("Envie o tempo de funcionamento da fabrica em segundos:\n");
    scanf("%d", &tS);

    calc(tS);

    return 0;
}
