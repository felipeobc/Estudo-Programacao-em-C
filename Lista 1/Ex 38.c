#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Salario, Salario_Final, Acrescimo;

    printf("Digite o Salario do Funcionario R$: ");
    scanf("%lf", &Salario);

    Acrescimo = Salario*25/100;
    Salario_Final = Salario + Acrescimo;

    printf("Salario do Funcionario com acrescimo de 25%% R$: %.2f\n ", Salario_Final);
    system("pause");

    return 0;


}
