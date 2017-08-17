#include <stdio.h>
#include <stdlib.h>

int main (){

    double Numero;

    printf("Digite um nuemro: ");
    scanf("%lf", &Numero);

    if(Numero > 0){

        printf("A raiz quadrada: %0.2f\n", sqrt(Numero));
        printf("Ao quadrado: %0.2f\n", pow(Numero,2));

    }else{
         printf("Numero Negativo !!");
    }
    system("pause");
    return 0;

}
