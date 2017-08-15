#include <stdio.h>
#include <stdlib.h>


int main (){

    double Polegandas, Centimetros;

   printf("Digite o comprimento em Centimetros: ");
   scanf("%lf", &Centimetros);

   Polegandas = Centimetros / 2.54;

   printf("O valor em Polegadas: %.2f pol\n", Polegandas);

   system("pause");
   return 0;


}
