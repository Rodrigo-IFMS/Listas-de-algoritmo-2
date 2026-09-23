/*1- Faça uma função que recebe por parâmetro o raio de uma esfera e calcule o seu
volume (v = 4/3.P .R3).*/
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

float conta(float raio){

    float volume;

    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

    return volume;
}


int main(){

    float raio = 0, vconta = 0;

    printf("Envie o raio da esfera para calcular o volume:(ex: 1.5, 0.0, 7.0) \n");
    scanf("%f", &raio);

    vconta = conta(raio);

    printf("O valor do raio e: %.2f", vconta);

    return 0;
}