
#include <stdio.h>
#include <conio.h>

main () {
     float x, z, degraus;
     printf ("##### ESTE PROGRAMA CALCULA A QUANTIDADE DE DEGRAUS DE UMA ESCADA #####\n");
     printf ("Informe o valor do degrau, em centimetros: ");
     scanf ("%f", &x);
     printf ("Informe a altura total da escada, em metros: ");
     scanf ("%f", &z);
     degraus=(z*100)/x;
     printf ("A quantidade de degraus eh: %.2f", degraus);
     getch ();
     }
