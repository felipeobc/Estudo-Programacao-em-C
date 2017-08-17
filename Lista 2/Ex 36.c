#include <stdio.h>
#include <stdlib.h>

int main() {

    double Valor_Venda, Comissao;

    printf("Digite o valor da venda R$: ");
    scanf("%lf", &Valor_Venda);

    if(Valor_Venda < 20000.00){

        Comissao = (Valor_Venda * 14)/100 + 400;
        printf("Comissao R$: %0.2f\n", Comissao);

    }else if(Valor_Venda <= 40000.00){

        Comissao = (Valor_Venda * 14)/100 + 500;
        printf("Comissao R$: %0.2f\n", Comissao);

    }else if(Valor_Venda <= 60000.00){

        Comissao = (Valor_Venda * 14)/100 + 550;
        printf("Comissao R$: %0.2f\n", Comissao);

    }else if(Valor_Venda <= 80000.00){

        Comissao = (Valor_Venda * 14)/100 + 600;
        printf("Comissao R$: %0.2f\n", Comissao);

    }else if(Valor_Venda <= 100000.00){

        Comissao = (Valor_Venda * 14)/100 + 650;
        printf("Comissao R$: %0.2f\n", Comissao);

    }else if(Valor_Venda > 100000.00){

        Comissao = (Valor_Venda * 16)/100 + 700;
        printf("Comissao R$: %0.2f\n", Comissao);

    }
    system("pause");
    return 0;

}
