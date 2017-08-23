#include <stdio.h>
#include <stdlib.h>

int main(){

    int Quantidade_Nota, Indice, Aritimetica = 1, Soma = 0;
    double Nota, Media;

    printf("Digite a quantidad de notas: ");
    scanf("%d", &Quantidade_Nota);

    for(Indice = 0; Indice < Quantidade_Nota; Indice++){
        recomeca:
        printf("Digite %d nota de: ", Indice);
        scanf("%lf", &Nota);

        if(Nota>=10 && Nota <=20){
            Soma += Nota;
            Aritimetica += Indice;

        }else{

            printf("Nota Invalida\n");
            goto recomeca;
        }

    }
    Media = Soma / Aritimetica;
    printf("Media aritimetica: %0.2f\n", Media);
}
