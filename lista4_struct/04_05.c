/*5) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba
os nomes da pessoa mais nova e da mais velha.
*/

#include <stdio.h>

int main(){


    struct pessoa{
        char nome[50];
        int dia;
        int mes;
        int ano;
    };

    struct pessoa psoas[6];
    int maisvelho = 0;
    int maisnovo = 0;

    printf("Digite os dados das 6 pessoas (nome, dia, mes, ano):\n");
    for(int i = 0; i < 6; i++){

        printf("Pessoa de numero %d:", i);

        scanf(" %[^\n]", psoas[i].nome);
        scanf("%d %d %d", &psoas[i].dia, &psoas[i].mes, &psoas[i].ano);

        if(psoas[i].ano < psoas[maisvelho].ano){
            maisvelho = i;
        }
        if(psoas[i].ano > psoas[maisnovo].ano){
            maisnovo = i;
        }
    }

    printf("Pessoa com mais idade: %s\n", psoas[maisvelho].nome);
    printf("Pessoa com menos idade:%s\n", psoas[maisnovo].nome);

    return 0;


}
