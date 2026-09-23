/*4) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/
#include <stdio.h>

struct horas{

    int hora;
    int minutos;
    int segundos;

};


int main(){

    struct horas tempos[5];
    int maiortempo = 0;


    printf("Digite os 5 horarios diferentes (hora, minuto, segundo):\n");
    for(int i = 0; i < 5; i++){

        printf("Horario %d:", i);
        scanf("%d %d %d", &tempos[i].hora, &tempos[i].minutos, &tempos[i].segundos);
    }

    for(int j = 0; j < 5; j++){


        int horasAT = tempos[j].hora * 3600 + tempos[j].minutos * 60 + tempos[j].segundos;
        int horasM =  tempos[maiortempo].hora * 3600 + tempos[maiortempo].minutos * 60 + tempos[maiortempo].segundos;

        if(horasAT > horasM){

            maiortempo = j;

        }

    }
    
    printf("==================================\n");
    printf("A maior hora encontrada foi: %02d %02d %02d\n", tempos[maiortempo].hora, tempos[maiortempo].minutos, tempos[maiortempo].segundos);







}