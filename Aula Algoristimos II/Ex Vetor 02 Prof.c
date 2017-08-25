#include<stdio.h>

//prototipacao
void inverter(int v[], int n);
void mostrar(int v[], int n);
void trocar(int v[], int i, int j);

int main(){
    int v[5] = {4,9,10,8,6};
    int n = 5;
    
    // processamento da inversao
    inverter(v, n);

    // mostrar os elementos do vetor
    mostrar(v, n);
    return 0;
}


void inverter(int v[], int n){
    int inicio = 0;
    int fim = n - 1;
    int aux;

    while (inicio < fim){
        trocar(v, inicio, fim);
        inicio++; fim--;
    }
}

void mostrar(int v[], int n){
    int i;
    printf("vetor: ");
    for (i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

void trocar(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
