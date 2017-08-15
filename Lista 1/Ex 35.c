#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main (){

    int a,b, hipotenusa;

    printf("Digite o valro dos catetos a e b: ");
    scanf("%d %d", &a, &b);

    hipotenusa = sqrt( pow(a,2)+ pow(b,2) );



    printf("Valor da Hipotenusa: %d\n", hipotenusa);
    system("pause");

    return 0;


}
