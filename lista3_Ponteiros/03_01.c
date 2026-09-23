/*1) Em C, funções retornam apenas um valor. Crie um programa que contorne isso
usando ponteiros.
-Implemente uma função chamada calcular_esfera que receba o raio de uma
esfera e devolva sua área e seu volume.
-Assinatura sugerida: void calcular_esfera(float raio, float *area, float *volume);
-Na main, peça ao usuário o raio, chame a função e imprima os resultados.
(Fórmulas: Área = 4 * PI * R² | Volume = (4/3) * PI * R³).*/

#include <stdio.h>
#define PI 3.14159265359

void calcular_esfera(float raio, float *area, float *volume){

    *area= 4 * PI * raio * raio;
    *volume = (4.0/3.0) * PI * raio * raio * raio;

}



int main(){

    float raio, area, volume;

    printf("Envie o raio para que seja calculado sua area e volume:\n");
    scanf("%f", &raio);

    calcular_esfera(raio, &area, &volume);

    printf("\n--- Resultados ---\n");
    printf("Área da superficie: %.2f\n", area);
    printf("Volume da esfera:   %.2f\n", volume);

    return 0;
}