#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Salario ,Salario_Final, Desconto;
    int Dia;

    printf("Digite os dias trabalahdos DIAS: ");
    scanf("%d", &Dia);

    Salario = Dia * 30.00;

    Desconto = Salario*8/100;
    Salario_Final = Salario - Desconto;

    printf("Dias Trabalhados: %d\n Salario com Desconto de 8%% R$: %.2f\n ", Dia ,Salario_Final);
    system("pause");

    return 0;


}
