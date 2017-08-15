#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Horas_Trabalhada, Salario, Acrescimo;
    int Dias;
    printf("Digite as horas trabalhado por dia : ");
    scanf("%lf", &Horas_Trabalhada);

    Horas_Trabalhada += 15.00 * Horas_Trabalhada;

    printf("Digite quantos dia no mes: ");
    scanf("%d", &Dias);

    Salario = Horas_Trabalhada * Dias;



    Acrescimo = Salario*10/100;
    Salario += Acrescimo;


    printf("Salario do Funcionario R$: %.2f\n ", Salario);
    system("pause");

    return 0;


}
