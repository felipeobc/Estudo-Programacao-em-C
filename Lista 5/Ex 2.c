#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int i, Total=0;
    char Palavra[20];

    printf("Digite uma Palavra: ");
    scanf("%s", Palavra);

    while(Palavra[Total] != '\0'){
        Total++;
    }
    printf("Tatal de letras na string: %d\n", Total);
    system("pause");
    return 0;
}
