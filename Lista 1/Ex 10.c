#include <stdio.h>
#include <stdlib.h>

int main (){

   double Km, M;

   printf("Digite a velocidade em km/h: ");
   scanf("%lf", &Km);

   M = Km/3.6;

   printf("Velocidade em m/s: %.2f\n", M);

   system("pause");
   return 0;



}
