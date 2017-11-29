#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu_TamanhoVetor(){ //Escolha a quantidade de Numeros para o tamanho do Vetor
    int R;
    volta:
    R = 0;
    printf("Escolha um Tamanho do Vetor\n");
    printf("(1)10!\n(2)100!\n(3)1000!\n(4)100000!\n(5)1000000!\n");
    printf("Digite uma opcao: ");
    scanf("%d", &R);
    if((R < 1) || (R > 10)){
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
        case 4: R = 100000;
        break;
        case 5: R = 1000000;
    }

    return R;
}
void Merge(int *V, int Inicio, int Meio, int Fim){

    // Cria os vetores auxiliares
    int * l = (int *) calloc( (Meio-Inicio), sizeof(int) );
    int * r = (int *) calloc( (Fim-Meio), sizeof(int) );


    int i = Inicio;
    int j = Meio;
    int k = Inicio;

    // Copia os valores nos vetores auxiliares
    for (i = Inicio, j = Meio; i < Meio || j < Fim; i++, j++)
    {
        if (i < Meio)
            l[i-Inicio] = V[i];

        if (j < Fim)
            r[j-Meio] = V[j];
    }

    i = Inicio;
    j = Meio;
    k = Inicio;
    while (i < Meio && j < Fim)
    {
        if (l[i-Inicio] < r[j-Meio])
        {
            V[k++] = l[i-Inicio];
            i++;
        }
        else
        {
            V[k++] = r[j-Meio];
            j++;
        }
    }

    while (i < Meio)
    {
        V[k++] = l[i-Inicio];
            i++;
    }

    while (j < Fim)
    {
        V[k++] = r[j-Meio];
            j++;
    }

    free(l);
    free(r);
}
void MergeSort(int *V, int Inicio, int Fim){
    int Meio;
    if((Fim-Inicio) > 1){
        Meio = Inicio + (Fim-Inicio)/2;
        MergeSort(V, Inicio, Meio);
        MergeSort(V, Meio, Fim);
        Merge(V, Inicio, Meio, Fim);
    }
}
void Numeros_VetorAleatorios(int *V, int N){ //Gera os nuemeros aleatorios para os Vetores
    int i;
    for(i = 0; i < N; i++){
        V[i] = rand();
    }

}
void Mostrar_Vetor(int *V, int N){ //Imprime o Vetor
    int i;
    printf("Vetor = { ");
    for(i = 0; i < N; i++){
        printf("%d ", V[i]);
    }
    printf("}\n");
}
int main(){
    int *Vetor1, Tamanho, Fi;

    Tamanho = Menu_TamanhoVetor();

    printf("Tamnho do Vetor: %d\n\n", Tamanho);

    Vetor1 = (int *)calloc(Tamanho, sizeof(int));

    Numeros_VetorAleatorios(Vetor1, Tamanho);

    Mostrar_Vetor(Vetor1, Tamanho);

    MergeSort(Vetor1, 0, Tamanho);

    Mostrar_Vetor(Vetor1, Tamanho);


    free(Vetor1);

    system("pause");
    return 0;
}
