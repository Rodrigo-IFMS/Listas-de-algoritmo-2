/*7) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.*/

#include <stdio.h>

int main(){
    
    struct atleta{
        char nome[50];
        char esporte[50];
        int idade;
        float altura;
    };

    struct atleta atletas[5];

    printf("Digite os dados dos 5 atletas (nome, esporte, idade, altura):\n");

    for(int i = 0; i < 5; i++){

        printf("Atleta de numero %d\n:", i + 1);

        scanf(" %[^\n]", atletas[i].nome);
        scanf(" %[^\n]", atletas[i].esporte);
        scanf("%d", &atletas[i].idade);
        scanf("%f", &atletas[i].altura);

    }

    // Ordenar os atletas por idade do mais velho para o mais novo
    for(int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - i - 1; j++){
            if(atletas[j].idade < atletas[j + 1].idade){
                struct atleta temp = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = temp;
            }
        }
    }

    printf("\nAtletas ordenados por idade (do mais velho para o mais novo):\n");
    for(int i = 0; i < 5; i++){
        printf("Nome: %s, Esporte: %s, Idade: %d, Altura: %.2f\n", atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }   
}