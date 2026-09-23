/*1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

#include <stdio.h>


int main(){

    struct pessoa{
        char nome[50];
        int idade;
        char endereco[50];
    };

    struct pessoa x;

    printf("Digite seu nome:\n");
    scanf(" %[^\n]",x.nome);

    printf("Digite sua idade:\n");
    scanf(" %d", &x.idade);

    printf("digite seu endereco:\n");
    scanf(" %[^\n]",x.endereco);

    printf("----------DADOS-------------\n");

    printf("Nome: %s\n", x.nome);
    printf("Idade: %d\n", x.idade);
    printf("Endereco: %s\n", x.endereco);




return 0;
}