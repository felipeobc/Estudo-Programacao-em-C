#include <stdio.h>


// declaracao de funcoes
int verificar_ordem_crescente(int v[], int n);
void teste(int obtido, int esperado);


// funcao principal
int main(){
    int v[5] = {1,2,3,4,5};
    teste(verificar_ordem_crescente(v,5), 1);   
    int v1[5] = {1,2,2,4,5};
    teste(verificar_ordem_crescente(v1,5), 0);   
    int v2[5] = {5,4,3,1};
    teste(verificar_ordem_crescente(v2,4), 0);   
    int v3[5] = {1,2,3,2,5};
    teste(verificar_ordem_crescente(v3,5), 0);   

    return 0;
}

void teste(int obtido, int esperado){
    if (obtido == esperado)
        printf("Sucesso! ");
    else 
        printf("Erro ...");

    printf(" Obtido = %d    Esperado = %d\n", obtido, esperado);
}

int verificar_ordem_crescente(int v[], int n){
    int i = 0;
    for (i = 0; i < n-1; i++) {
        if (v[i] >= v[i+1]) {
            return 0;
        }
    }
    return 1;
}
