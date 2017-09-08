#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    int i, total;

    printf("Preencha com numeros 0 ou 1: ");
    scanf("%s", str);

    total = 0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '0'){
            str[i] = '1';
        }
    }
    printf("string trocada: %s\n", str);
    system("pause");
    return 0;
}

