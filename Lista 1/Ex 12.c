#include <stdio.h>
#include <stdlib.h>

int main (){

   double milhas, km;

   printf("Digite a distancia em Milhas: ");
   scanf("%lf", &milhas);

   km = 1.61 * milhas;

   printf("Distancia em km: %.2f\n", km);

   system("pause");
   return 0;



}
