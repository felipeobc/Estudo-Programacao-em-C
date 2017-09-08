#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char Palavra[20];
    int i, Tamanho, Total_Spaco=0;

    printf("Preencha com uma string: ");
    gets(Palavra);
    setbuf(stdin,NULL);

    Tamanho = strlen(Palavra);

    for(i = 0; i < Tamanho ; i++){
        if(Palavra[i] == ' '){
                Total_Spaco++;
        }
    }

    printf("Quantidade de Espaco: %d\n", Total_Spaco);
    system("pause");
    return 0;


}




