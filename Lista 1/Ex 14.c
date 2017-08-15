#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main (){

   double Graus, Rad;

   printf("Digite o valor do angulo em graus: ");
   scanf("%lf", &Graus);

   Rad = Graus * PI/180;

   printf("Valor do angulo em Radiano: %.2f Rad\n", Rad);
   system("pause");
   return 0;

}
