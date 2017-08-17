#include <stdio.h>
#include <stdlib.h>

int main() {

    int Km, Litros_Consumidos, Consumo;

    printf("Digite  distancia percorrida em Km: ");
    scanf("%d", &Km);

    printf("Quantidade de litros consumidos na viagem: ");
    scanf("%d", &Litros_Consumidos);

    Consumo = Km / Litros_Consumidos;


    if(Consumo < 8){
        printf("Venda o Carro\n");
    }else if ((Consumo >= 8 ) && (Consumo <= 14)){
        printf("Economico\n");
    }else if (Consumo < 12){
        printf("Super Economico\n");
    }
    system("pause");
    return 0;

}

