#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main (){

   double Graus, Rad;

   printf("Digite o valor do angulo em Radiano: ");
   scanf("%lf", &Graus);

   Graus = Rad * 180/PI;

   printf("Valor do angulo em Graus: บบ%.2f\n", Graus);
   system("pause");
   return 0;

}
