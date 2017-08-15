#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Valor_Produto, Valor_Final_Produto,Desconto;

    printf("Digite o valor do Produto: ");
    scanf("%lf", &Valor_Produto);

    Desconto = Valor_Produto*12/100;
    Valor_Final_Produto = Valor_Produto - Desconto;

    printf("valor do produto R$: %.2f\n ", Valor_Final_Produto);
    system("pause");

    return 0;


}

