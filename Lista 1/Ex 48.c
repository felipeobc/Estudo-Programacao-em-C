#include <stdio.h>

int main(){

   int tempo, horas, horas_seg, minutos, segundos;
   horas_seg=3600;
   printf("Entre com o numero de segundos: ");
   scanf("%d", &tempo);

   horas = (tempo/horas_seg);
   minutos = (tempo -(horas_seg*horas))/60;
   segundos = (tempo -(horas_seg*horas)-(minutos*60));

   printf("%dh : %dm :%ds \n",horas,minutos,segundos);

   return 0;
}
