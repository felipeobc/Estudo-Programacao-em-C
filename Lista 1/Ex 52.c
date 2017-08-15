#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Premio, Amigo1, Amigo2, Amigo3, Valor_Arrecadado, Parte_Amigo1, Parte_Amigo2, Parte_Amigo3;

    printf("Valor da aposta do 1 Amigo: ");
    scanf("%lf", &Amigo1);
    Valor_Arrecadado += Amigo1;
    printf("Valor da aposta do 2 Amigo: ");
    scanf("%lf", &Amigo2);
    Valor_Arrecadado += Amigo2;
    printf("Valor da aposta do 3 Amigo: ");
    scanf("%lf", &Amigo3);
    Valor_Arrecadado += Amigo3;

    printf("Valor Arrecadado R$: %.2f\n ", Valor_Arrecadado);

    printf("Digite o valor do premio: ");
    scanf("%lf", &Premio);
    printf("Valor do Premio R$: %.2f\n ", Premio);

    Parte_Amigo1 = (Amigo1 * 100) / Valor_Arrecadado;
    Parte_Amigo2 = (Amigo2 * 100) / Valor_Arrecadado;
    Parte_Amigo3 = (Amigo3 * 100) / Valor_Arrecadado;

    printf("Amigo 1 Receberar R$: %.2f\n ", Premio*Parte_Amigo1/100);
    printf("Amigo 2 Receberar R$: %.2f\n ", Premio*Parte_Amigo2/100);
    printf("Amigo 3 Receberar R$: %.2f\n ", Premio*Parte_Amigo3/100);

    system("pause");

    return 0;


}


