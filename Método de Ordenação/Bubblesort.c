/*int Menu_TamanhoVetor(){ //Escolha a quantidade de Numeros para o tamanho do Vetor
    int R;
    volta:
    R = 0;
    printf("Escolha um Tamanho do Vetor\n");
    printf("(1)10!\n(2)100!\n(3)1000!\n(4)10000!\n(5)100000!\n(6)1000000!\n");
    printf("Digite uma opcao: ");
    scanf("%d", &R);
    if((R < 1) || (R > 6)){
            printf("Numero incorreto !!\n");
            printf("Por Favor escolha uma opcao\n");
            goto volta;
        }

    switch(R){
        case 1: R = 10;
        break;
        case 2: R = 100;
        break;
        case 3: R = 1000;
        break;
        case 4: R = 10000;
        break;
        case 5: R = 100000;
        break;
        case 6: R = 1000000;
        break;

    }

    return R;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Numeros_VetorAleatorios(int *V, int N){ //Gera os nuemeros aleatorios para os Vetores
    int i;
    for(i = 0; i < N; i++){
        V[i] = rand();
    }

}
void BubbleSort(int *V, int N){ //Ordenação BubbleSort com a modificação.
    int i, Continua, Aux, Fim = N;
    do{
        Continua = 0;
        for(i = 0; i < Fim - 1; i++){
            if(V[i] > V[i+1]){
                Aux = V[i];
                V[i] = V[i+1];
                V[i+1] = Aux;
                Continua = 1;

            }
        }
        Fim--;
    }while(Continua != 0);

}
int main(){
    int *Vetor1, *Vetor2, *Vetor3, *Vetor4, *Vetor5, *Vetor6;
    clock_t tempo;

    //Vetor1 = (int *)calloc(10 , sizeof(int));
    //Vetor2 = (int *)calloc(100, sizeof(int));
    //Vetor3 = (int *)calloc(1000, sizeof(int));
    Vetor4 = (int *)calloc(10000, sizeof(int));
    //Vetor5 = (int *)calloc(100000, sizeof(int));
    //Vetor6 = (int *)calloc(1000000, sizeof(int));

    //Numeros_VetorAleatorios(Vetor1, 10);
    //Numeros_VetorAleatorios(Vetor2, 100);
    //Numeros_VetorAleatorios(Vetor3, 1000);
    Numeros_VetorAleatorios(Vetor4, 10000);
    //Numeros_VetorAleatorios(Vetor5, 100000);
    //Numeros_VetorAleatorios(Vetor6, 1000000);

    //BubbleSort(Vetor1, 10);
   // BubbleSort(Vetor2, 100);
   // BubbleSort(Vetor3, 1000);
   tempo = clock();
    BubbleSort(Vetor4, 10000);
   double demora = (double) (clock() - tempo) / CLOCKS_PER_SEC;
    printf("%f", demora);
   // BubbleSort(Vetor5, 100000);
    //BubbleSort(Vetor6, 1000000);


    //free(Vetor1);
    //free(Vetor2);
    //free(Vetor3);
    free(Vetor4);
    //free(Vetor5);

    system("pause");
    return 0;
}
