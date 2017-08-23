#include <stdio.h>
#include <stdlib.h>

int main(){

    int Numero1, Numero2, Indice, Soma = 0, Multiplicar = 1;

    printf("Digite 1 numero: ");
    scanf("%d", &Numero1);
    printf("Digite 2 numero: ");
    scanf("%d", &Numero2);

    if(Numero1 > Numero2){
        for(Indice = Numero2; Indice <= Numero1; Indice ++){
            if(Indice % 2 == 0){

                Soma += Indice;
            }
            if(Indice % 2 == 1){

                Multiplicar *= Indice;
            }
        }
    }
    if(Numero1 < Numero2){
        for(Indice = Numero1; Indice <= Numero2; Indice ++){
            if(Indice % 2 == 0){

                Soma += Indice;
            }
            if(Indice % 2 == 1){

                Multiplicar *= Indice;
            }
        }
    }
    printf("Somas dos pares no intervalo entre %d e %d: %d\n",Numero1, Numero2, Soma);
    printf("Multiplicacao dos impares no intervalo entre %d e %d: %d\n",Numero1, Numero2, Multiplicar);
    system("pause");
    return 0;



}
