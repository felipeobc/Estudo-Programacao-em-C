#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char Palavra[20], Vogais[11] = "aeiouAEIOU";
    int i, j, tamanho1, tamanho2;

    printf("Preencha com uma string: ");
    scanf("%s", Palavra);

    tamanho1 = strlen(Palavra);
    tamanho2 = strlen(Vogais);


    for(i = 0; i < tamanho1 ; i++){
        for(j = 0; j < tamanho2; j++){
            if(Palavra[i] == Vogais[j]){
                Palavra[i] = ' ';
            }
        }
    }
    printf("Palavra sem vogal: %s\n", Palavra);
    system("pause");
    return 0;


}


