/*6. Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu
conceito, conforme a tabela abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A*/

#include <stdio.h>

char calculaConceito(float media){
    if(media >= 0.0 && media <= 4.9){
        return 'D';
    }else if(media >= 5.0 && media <= 6.9){
        return 'C';
    }else if(media >= 7.0 && media <= 8.9){
        return 'B';
    }else if(media >= 9.0 && media <= 10.0){
        return 'A';
    }

    return 'I';
}

int main(){
    float media;

    printf("Digite a media final do aluno: \n");
    scanf("%f", &media);

    char conceito = calculaConceito(media);

    printf("O conceito final do aluno para a media %.1f e: %c\n", media, conceito);

    return 0;
}