#include <stdlib.h>
#include <stdio.h>

int main() {
    int Idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &Idade);

    if(Idade <=7 ){

        printf("Infantil A\n");

    }else if (Idade <= 10){

        printf("Infantil B\n");

    }else if (Idade <= 13){

        printf("Juvenil A\n");

    }else if (Idade <=17){

        printf("Juvenil B\n");

    }else if (Idade >=18){

        printf("Senior\n");

    }
    system("pause");
    return 0;
}
