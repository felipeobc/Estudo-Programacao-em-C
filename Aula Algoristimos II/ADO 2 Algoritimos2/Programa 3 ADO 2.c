/*
Dados um vetor de n números inteiros, faça uma função para determinar o comprimento de um segmento crescente de comprimento máximo.
Exemplos: Na sequência
  {5, 10, 3, 2, 4, 7, 9, 8, 5} o comprimento do segmento crescente máximo é 4 {2, 4, 7, 9}.
Na sequência
  {10, 8, 7, 5, 2} o comprimento decomprimento de um segmento crescente de comprimento máximo. um segmento crescente máximo é 1.
*/

#include <stdio.h>
#include <stdlib.h>
void Montar_Vetor(int *V, int N){
    int i;
    printf("Digite o valor das posicoes do vetor:\n");
    for(i = 0; i < N; i++){
        printf("Vetor[%d] = ", i+1);
        scanf("%d", &V[i]);
    }
}
int Contagem_Seguimento(int *V, int N){
    int i, contador=1, contador_final=1;
    for(i = 1; i < N; i++){
        if(V[i] > V[i-1]){
            contador++;
        }if(contador < contador_final){
                contador_final = contador;
            }else{
                contador = 1;
                V[i-1] = V[i];
            }
        }
        return contador_final;
    }
int main(){
    int Tamanho, *Vetor1, *Vetor2, Seguimentos;

    printf("Digite o tamanho do Vetor: ");
    scanf("%d", &Tamanho);

    Vetor1 = (int *)calloc(Tamanho, sizeof(int));

    Montar_Vetor(Vetor1, Tamanho);

    Seguimentos = Contagem_Seguimento(Vetor1, Tamanho);

    printf("Numeros de Seguimentos do vetor: %d\n", Seguimentos);



    system("pause");
    return 0;


}
