#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Numero, Quadrado=0, Cubo=0, Raiz=0;
    int i;

    Numero = 10;

    for(i = Numero; i >= 0; i--){

        if(Numero > 0){

            Raiz = sqrt(Numero);
            Quadrado = pow(Numero, 2);
            Cubo = pow(Numero ,3);

            printf("Raiz = %0.2f\n", Raiz);
            printf("Quadrado = %0.2f\n", Quadrado);
            printf("Cubo = %0.2f\n", Cubo);

        }else{
            printf("Fim\n");
            break;
        }
    }
    system("pause");
    return 0;

}



