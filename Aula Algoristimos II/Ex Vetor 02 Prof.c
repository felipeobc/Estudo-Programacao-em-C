#include<stdio.h>

// prototipacao da funcao
int ehIgual(int v1[], int n1, int v2[], int n2);
int contagem(int num, int v[], int tam);
void teste(int obtido, int esperado);
void teste01();
void teste02();
void teste03();

int main(){
    teste01();
    teste02();
    teste03();
    return 0;
}


void teste01(){
    int v1[5] = {1,2,3,4,4};
    int v2[5] = {1,2,3,3,4};

    int obtido = ehIgual(v1, 5, v2, 5);
    teste(obtido, 0);
}

void teste02(){
    int v1[5] = {1,2,3,4,5};
    int v2[5] = {1,2,3,5,4};

    int obtido = ehIgual(v1, 5, v2, 5);
    teste(obtido, 1);
}

void teste03(){
    int v1[5] = {1,2,3,4,5};
    int v2[5] = {1,2,3,5,6};

    int obtido = ehIgual(v1, 5, v2, 5);
    teste(obtido, 0);
}

int ehIgual(int v1[], int tam1, int v2[], int tam2){
    int i, cont1, cont2;
    if(tam1 != tam2)
        return 0;
    else {
        for (i = 0; i < tam1; i++){
            cont1 = contagem(v1[i], v1, tam1);
            cont2 = contagem(v1[i], v2, tam2);

            if (cont1 != cont2)
                return 0;
        }
    }
    return 1;
}

int contagem(int num, int v[], int tam) {
    int i;
    int contador = 0;
    for (i = 0; i < tam; i++){
        if (v[i] == num)
            contador++;
    }
    return contador;
}


void teste(int obtido, int esperado){
    if (obtido == esperado)
        printf("Sucesso! ");
    else 
        printf("Erro ...");

    printf(" Obtido = %d    Esperado = %d\n", obtido, esperado);
}
