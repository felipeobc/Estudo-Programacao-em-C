#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int i, j, tamanho1;
    char Nome1[20], Nome2[20];

    printf("Digite uma Palavra: ");
    scanf("%s", Nome1);
    printf("Digite outro Palavra: ");
    scanf("%s", Nome2);

    tamanho1 = strlen(Nome1);

    for(i = 0; Nome1[tamanho1] != '\0'; i++){
        if(Nome1[i] == Nome2[i]){
            printf("Nomes sao iguais\n");
        }else{
            printf("Nomes Diferentes\n");
        }

    }


    system("pause");
    return 0;
}


