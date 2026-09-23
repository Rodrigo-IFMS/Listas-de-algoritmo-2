/* Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo
da fórmula de báskara e imprima as suas raízes, caso seja possível calcular.
*/

#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c){

    float delta = 0.0, raiz1 = 0.0, raiz2 = 0.0;

    delta = (b*b) - (4*a*c);

    if(delta < 0){
        printf("A equacao nao possui raizes reais (delta negativo)");
        
    }else if( delta == 0){
        raiz1 = -b / (2*a);
        printf("A equacao apenas possui uma raiz real, x = %.2f\n", raiz1);
    }else{
        raiz1 = (-b + sqrt(delta)) / (2*a);  

        raiz2 = (-b - sqrt(delta)) / (2*a);

        printf("\nOs valores das raizes de bhaskara sao: x1= %.2f x2= %.2f", raiz1, raiz2);
    }

    

  
}


int main(){

    float a = 0,b = 0,c = 0;

    printf("Envie os parametros para calcular a bhaskara:(ex: 1 -5 6 ) \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("\nEquacao recebida: %.2fx^2 + (%.2fx) + (%.2f) = 0\n", a, b, c);

    bhaskara(a, b, c);

    return 0;
}

