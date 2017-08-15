#include <stdio.h>
#include <stdlib.h>

int main (){

   double Km, M;

   printf("Digite a velocidade em m/s: ");
   scanf("%lf", &M);

   Km = M*3.6;

   printf("Velocidade em km/h: %.2f\n", Km);

   system("pause");
   return 0;



}
