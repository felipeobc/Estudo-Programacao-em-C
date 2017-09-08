#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    int i;



    printf("Escreva uma string: ");
    scanf("%s", str);


    printf("String inversa: ");
    for(i = strlen(str) - 1 ; i >= 0 ; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

