/*3) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora,
escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura.
Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os
cinco.
*/

#include <stdio.h>

int main(){

    struct aluno{
        char nome[50];
        float notas[3];
        int matricula;
    };

    struct aluno alunos[5];

    int indiceM = 0;
    float Maiormedia = -1.0;

    for(int i = 0; i < 5; i++){

        printf("---------Cadastro de aluno---------");

        printf("Envie o nome do aluno:\n");
        scanf("%[^\n]", alunos[i].nome);

        printf("Envie o numero de matricula:\n (ex:012)");
        scanf("%d", &alunos[i].matricula);

        float somanotas = 0.0;
        for(int j = 0; j < 3; j++){

            printf("Nota: %d\n", j+1);
            scanf("%f", &alunos[i].notas[j]);

            somanotas = (somanotas + alunos[i].notas[j]);
        }

        float mediaT = somanotas / 3.0;

        if(mediaT > Maiormedia){
            Maiormedia = mediaT;
            indiceM = i;
        }

        printf("========================\n");
        printf("Aluno com a maior media geral:\n");
        printf("Nome: %s\n", alunos[indiceM].nome);
        printf("notas: %.1f | %.1f | %.1f", alunos[indiceM].notas[0], alunos[indiceM].notas[1], alunos[indiceM].notas[2]);

        printf("Média Geral: %.2f\n", Maiormedia);
        printf("=====================================\n");

    }



return 0;
}