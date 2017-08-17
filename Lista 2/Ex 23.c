#include <stdio.h>
#include <stdlib.h>

int main() {

    int Ano;

    printf("Digite o ano: ");
    scanf("%d", &Ano);

    if(Ano % 4 == 0){
        printf("Ano Bissexto\n");
    }else if (Ano % 400 == 0){
        printf("Ano Bissexto\n");
    }else if (Ano % 100 == 1){
        printf("Ano Bissexto\n");
    }else{
        printf("Esse ano nao e bissexto\n");
    }
    system("pause");
    return 0;

}

