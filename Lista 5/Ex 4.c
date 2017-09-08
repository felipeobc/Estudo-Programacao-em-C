#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int i, Total=0;
    char Palavra[20];

    printf("Digite uma Palavra: ");
    scanf("%s", Palavra);

    Palavra[4] = '\0';

    printf("As 4 primeira letras do nome: %s \n", Palavra);



    system("pause");
    return 0;
}


