#include <stdio.h>

// prototipacao
void leia_vetor(int v[], int n);
int calcular_media(int v[], int n);
void mostrar_maiores_que_media(int media,int v[],int n);
void leia_numero(int *n);

int main(){

    int v[100];
    int n, media;

    leia_numero(&n);
    leia_vetor(v, n);
    media = calcular_media(v, n);
    mostrar_maiores_que_media(media, v, n);

    return 0;
}
//-----------------
//-----------------
void leia_numero(int *n){
    printf("N: ");
    scanf("%d", n);
}

//-----------------
//-----------------
void leia_vetor(int v[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("v[%d] =", i);
        scanf("%d", &v[i]);
    }
    
}

//-----------------
//-----------------
int calcular_media(int v[], int n){
    int media = 0, i;
    int soma = 0;

    for (i = 0; i < n; i++){
        soma += v[i];
    }

    media = soma/n;
    return media;
}

//-----------------
//-----------------
void mostrar_maiores_que_media(int media,int v[],int n){
    int i;
    printf("Os números maiores que a média são:");
    for (i = 0; i < n; i++){
        if (v[i] > media)
            printf("%d  ", v[i]);
    }
}
