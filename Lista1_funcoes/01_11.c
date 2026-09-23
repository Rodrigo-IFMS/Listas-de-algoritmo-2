/*11. Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar
qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário
que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um
triângulo é menor do que a soma do comprimento dos outros dois lados. O
procedimento deve identificar o tipo de triângulo formado observando as seguintes
definições:
a. Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
b. Triângulo Isósceles: os comprimentos de 2 lados são iguais.
c. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.*/

#include <stdio.h>

void verificaTriangulo(float X, float Y, float Z){
    if(X < Y + Z && Y < X + Z && Z < X + Y){
        if(X == Y && Y == Z){
            printf("Triangulo Equilatero\n");
        }else if(X == Y || X == Z || Y == Z){
            printf("Triangulo Isosceles\n");
        }else{
            printf("Triangulo Escaleno\n");
        }
    }else{
        printf("Os valores nao formam um triangulo\n");
    }
}

int main(){
    float x, y, z;

    printf("Digite o primeiro lado: \n");
    scanf("%f", &x);

    printf("Digite o segundo lado: \n");
    scanf("%f", &y);

    printf("Digite o terceiro lado: \n");
    scanf("%f", &z);

    verificaTriangulo(x, y, z);

    return 0;
}