#include <stdio.h>
#include <stdlib.h>

int main() {

    int Dia_Semana;

    printf("Para saber qual numero corresponde ao dia da semana digite um numero: ");
    scanf("%d", &Dia_Semana);

    switch(Dia_Semana){

        case 1: printf("Domingo\n");
                break;
        case 2: printf("Segunda-Feria\n");
                break;
        case 3: printf("Terca-Feria\n");
                break;
        case 4: printf("Quarta-Feria\n");
                break;
        case 5: printf("Quinta-Feria\n");
                break;
        case 6: printf("Sexta-Feria\n");
                break;
        case 7: printf("Sabado\n");
                break;
    }
    system("pause");
    return 0;

}
