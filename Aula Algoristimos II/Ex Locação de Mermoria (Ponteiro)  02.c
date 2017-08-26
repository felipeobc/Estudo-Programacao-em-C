#include <stdio.h>
#include <stdlib.h>
void Converte(int x, int *horas, int *minutos);

int main (){

    int Minutos,h,m ;
    printf("Difigite em minutos: ");
    scanf("%d", &Minutos);

    Converte(Minutos, &h, &m);

    printf("%dh : %dm\n", h,m);
}

void Converte(int x, int *horas, int *minutos){

    *horas = x / 60;
    *minutos = x % 60;

}


