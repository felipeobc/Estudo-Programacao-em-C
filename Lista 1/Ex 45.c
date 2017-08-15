#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main () {

    char letra;

    printf("Digite uma letra minuculas: ");
    scanf("%c", &letra);

    printf("Letras Maiusculas: %c", toupper(letra));

}
