#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int i, Total=0;
    char Palavra[20];

    printf("Digite uma Palavra: ");
    scanf("%s", Palavra);

    for(i = 0; Palavra[i] != '\0'; i++){
        if((Palavra[i] == 'a')||(Palavra[i] == 'A')){
            printf("Palavra: %s\n", Palavra);
            break;
        }else{
            printf("Essa palavra nao contem a primeira letra a ou  A\n");;
            break;
        }
    }
    system("pause");
    return 0;
}

