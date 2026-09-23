/*2) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior
esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma
estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia
uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro
desse retângulo.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    struct ponto{
        int x;
        int y;
    };


    struct Retangulo{
        struct ponto sup_esq;
        struct ponto inf_dir;
    };

    struct Retangulo r;

    printf("Envie a coordenada X superior esquerda:\n");
    scanf("%d", &r.sup_esq.x);

    printf("Envie a coordenada Y superior esquerda:\n");
    scanf("%d", &r.sup_esq.y);

    printf("Envie a coordenada X inferior direita:\n");
    scanf("%d", &r.inf_dir.x);

    printf("Envie a coordenada Y inferior direita:\n");
    scanf("%d", &r.inf_dir.y);


    int largura = abs(r.sup_esq.x - r.inf_dir.x);
    int altura = abs(r.inf_dir.y - r.sup_esq.y);

    int area = (largura*altura);

    int perimetro = 2*(largura+altura);

    double diagonal = sqrt(pow(largura, 2) + pow(altura, 2) );


    printf("Dado os dois pontos, temos:\n");

    printf("Area: %d\n", area);
    printf("Diagonal %.2f\n", diagonal);
    printf("perimetro: %d\n", perimetro);


    return 0;
}