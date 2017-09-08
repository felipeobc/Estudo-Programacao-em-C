#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int i, Total;
    char Palavra[20];

    printf("Digite uma Palavra: ");
    scanf("%s", Palavra);

    Total = strlen(Palavra);
    printf("Numeros de letras que contem o nome: %d\n", Total);

    system("pause");
    return 0;
}


