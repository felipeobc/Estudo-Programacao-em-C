#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main (){

   double Poleganda, Centimetros;

   printf("Digite o comprimento em Polegadas: ");
   scanf("%lf", &Poleganda);

   Centimetros = Poleganda * 2.54;

   printf("O valor em Centimetros: %.2f cm\n", Centimetros);

   system("pause");
   return 0;



}
