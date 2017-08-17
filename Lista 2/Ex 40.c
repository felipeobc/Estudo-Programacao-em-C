#include <stdio.h>
#include <stdlib.h>

int main(){

    double Custo_Fabrica, Consumidor;

    printf("Digite o custo para a fabrica R$: ");
    scanf("%lf", &Custo_Fabrica);

     if(Custo_Fabrica < 12000 ){

        Consumidor = (Custo_Fabrica * 5)/100 + Custo_Fabrica;

    }else if (Custo_Fabrica <= 25000){

        Consumidor = ((Custo_Fabrica * 10)/100) + ((Custo_Fabrica* 15)/100) + Custo_Fabrica;

    }else if (Custo_Fabrica > 25000 ){

        Consumidor = ((Custo_Fabrica * 15)/100) + ((Custo_Fabrica* 20)/100) + Custo_Fabrica;
    }
    printf("Valor final pata consumidor R$: %0.2f\n", Consumidor);
    system("pause");
    return 0;
}
