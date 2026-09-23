/*5) Crie uma função que varra um vetor de inteiros uma única vez e retorne três
informações simultaneamente (Devem ser apresentadas na Main).
-Assinatura: void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max,
float *media);
-O main deve passar um vetor e os endereços das variáveis onde os resultados
serão armazenados. Toda a varredura do vetor deve ser feita via aritmética de
ponteiros (*(vetor + i) ou avançando um ponteiro auxiliar).*/

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media){

   *min = *vetor;
   *max = *vetor;

   int soma = 0;
   int i = 0;


   while (i < tamanho){

    int atual = *vetor;

    if(atual < *min){
        *min = atual;
    }
    if(atual > *max){
        *max = atual;
    }
    soma+= atual;

    vetor++;
    i++;

   }

   *media = (float)soma/(int)tamanho;
}

#include <stdio.h>

int main(){

    int v[5], tamanho = 5;
    float media;
    int min = 0, max = 0;

    printf("Defina os elementos do vetor:\n");
    for(int i = 0; i < 5; i++){

        scanf("%d", &v[i]);

    }

    extrair_estatisticas(v, tamanho, &min, &max, &media);

    printf("As estatisticas extraidas foram:\n");
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Media: %.2f", media);

    return 0;

}