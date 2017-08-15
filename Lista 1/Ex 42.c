#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Salario, Acrescimo, Desconto;

    printf("Digite o Salario do funcionario: ");
    scanf("%lf", &Salario);

    Acrescimo = Salario*5/100;
    Salario += Acrescimo;

    Desconto = Salario*7/100;
    Salario -= Desconto;

    printf("Salario do Funcionario R$: %.2f\n ", Salario);
    system("pause");

    return 0;


}
