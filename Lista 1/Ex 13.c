#include <stdio.h>
#include <stdlib.h>

int main (){

   double milhas, km;

   printf("Digite a distancia em Km: ");
   scanf("%lf", &km);

   milhas = km/1.61;

   printf("Distancia em Milhas: %.2f\n", milhas);

   system("pause");
   return 0;



}
