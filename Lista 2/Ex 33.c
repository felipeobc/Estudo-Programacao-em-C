#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double Preco_Novo, Preco_Antigo;

    printf("DIgite o preco do produto R$: ");
    scanf("%lf", &Preco_Antigo);

    if(Preco_Antigo > 50){

        Preco_Novo = (Preco_Antigo * 5)/100 + Preco_Antigo;

    } else if (Preco_Antigo <= 100){

        Preco_Novo = (Preco_Antigo * 10)/100 + Preco_Antigo;

    }else if (Preco_Antigo > 100){

        Preco_Novo = (Preco_Antigo * 15)/100 + Preco_Antigo;
    }

    if(Preco_Novo <= 80){

        printf("Valor Novo R$: %0.2f\n", Preco_Novo);
       printf("Barato! \n");

    }else if(Preco_Novo <= 120){

        printf("Valor Novo R$: %0.2f\n", Preco_Novo);
        printf("Normal!!\n");

    }else if(Preco_Novo <= 200){

        printf("Valor Novo R$: %0.2f\n", Preco_Novo);
        printf("Caro!!\n");

    }else if(Preco_Novo > 120){

        printf("Valor Novo R$: %0.2f\n", Preco_Novo);
        printf("Muito Caro!!\n");
    }

    system("pause");
    return 0;


}

