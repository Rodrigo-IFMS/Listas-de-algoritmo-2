/*10) Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo.*/

#include <stdio.h>


int main(){

int a, *b, **c, ***d;

b = &a;
c = &b;
d = &c;

printf("Defina o valor de A para que possa ser calculado b c e d atraves de ponteiros:\n");
scanf("%d", &a);

int dobro = ((*b) * 2);
int triplo = ((**c) * 3);
int quadruplo = ((***d) * 4);

printf("o valor de a e: -(%d)- e suas operacoes sao em ordem: =(%d)= =(%d)= =(%d)=", a, dobro, triplo, quadruplo);


    return 0;
}