/*6) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de
cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho*/

#include <stdio.h>

int main(){

struct atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

struct atleta atletas[5];
int maisvelho = 0;
int maisalto = 0;

printf("Digite os dados dos 5 atletas (nome, esporte, idade, altura):\n");

for(int i = 0; i < 5; i++){

    printf("Atleta de numero %d\n:", i + 1);

    scanf(" %[^\n]", atletas[i].nome);
    scanf(" %[^\n]", atletas[i].esporte);
    scanf("%d", &atletas[i].idade);
    scanf("%f", &atletas[i].altura);

    if(atletas[i].idade > atletas[maisvelho].idade){
        maisvelho = i;
    }
    if(atletas[i].altura > atletas[maisalto].altura){
        maisalto = i;
    }


}

    printf("Atleta mais alto: %s\n", atletas[maisalto].nome);
    printf("Atleta mais velho: %s\n", atletas[maisvelho].nome);


}