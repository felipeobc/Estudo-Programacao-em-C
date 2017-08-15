#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Valor_Produto, Valor_Final_Produto,Desconto;

    printf("Digite o valor do Produto: ");
    scanf("%lf", &Valor_Produto);

    Desconto = Valor_Produto*10/100;
    Valor_Final_Produto = Valor_Produto - Desconto;

    printf("Valor do produto com Desconto de 10%% R$: %.2f\n ", Valor_Final_Produto);

    Valor_Final_Produto = Valor_Produto;

    Valor_Final_Produto = Valor_Produto /3;

    printf("Valor do produto em 3x sem juros de R$: %.2f\n ", Valor_Final_Produto);

    Valor_Final_Produto = Valor_Produto;

    Desconto = Valor_Produto*10/100;
    Valor_Final_Produto = Valor_Produto - Desconto;

    Valor_Final_Produto = Valor_Final_Produto*5/100;

    printf("Valor da comissao do vendedor R$: %.2f\n ", Valor_Final_Produto);

    system("pause");

    return 0;


}
