/*4 - Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna
essa idade expressa em dias*/
#include <stdio.h>

int calc(int anos, int meses, int dias){
    int totaldias = (anos*365) + (meses*30) + dias;
    return totaldias;
}


int main(){
    
    int anos, meses, dias;

    printf("Envie a idade em anos, meses e dias para ser expressa em dias:\n");
    scanf("%d %d %d", &anos, &meses, &dias);

    int total = calc(anos, meses, dias);

    printf("O total da idade em dias e: %d\n", total);


    return 0;
}
