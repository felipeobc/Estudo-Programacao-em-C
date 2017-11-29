#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct vetor_t{

    int * elementos;
    int tamanho;

} * Vetor;
typedef void (*AlgoritmoOrdenacao) (int*, int, int);


void BubbleSort(int *V, int nao_usado, int N){ //Ordenação BubbleSort com a modificação.
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
void InsertSort(int *V, int nao_usado, int N){ //Ordenação InsertSort com a modificação.
    int i, j, Aux;
    for(i = 1; i < N; i++){
        Aux = V[i];
        for(j = i; (j > 0)&&(Aux < V[j-1]); j--){
            V[j] = V[j-1];
        }
        V[j] = Aux;
    }

}
void SelectioSort(int *V, int nao_usado, int N){
    int i ,j, menor, troca;
    for(i = 0; i < N-1; i++){
        menor = i;
        for(j = i+1; j < N; j++){
            if(V[j] < V[menor])
                menor = j;
        }
        if(i != menor){
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }

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
int Particionar(int *v, int Inicio, int Fim){
    int pivot = v[Inicio];
    int i = Inicio+1;
    int j = Fim-1;
    while (i <= j)
    {
        if (pivot > v[i])
        {
            i++;
        }

        else if (pivot < v[j])
        {
            j--;
        }

        else
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++; j--;
        }
    }
    v[Inicio] = v[j];
    v[j] = pivot;
    return j;
}
void QuickSort(int *V, int Inicio, int Fim){
    int Pivo, contador = 0;
    if(Fim > Inicio){
        Pivo = Particionar(V, Inicio, Fim);
        QuickSort(V, Inicio, Pivo);
        QuickSort(V, Pivo+1, Fim);
    }
}
Vetor novo_vetor(){

    // Cria a estrutura vetor
    Vetor v = (Vetor) calloc(1, sizeof(struct vetor_t));

    // Inicia a estrutura

    int condicao = 0;
    int R = 0;
    do {
        printf("Escolha um Tamanho do Vetor\n");
        printf("(1)10000!\n(2)50000!\n(3)100000!\n(4)500000!\n(5)1000000!\n(6)5000000!\n(7)10000000!\n");
        printf("Digite uma opcao: ");
        scanf("%d", &R);
        if((R < 1) || (R > 5)){
                printf("Numero incorreto !!\n");
                printf("Por Favor escolha uma opcao\n");
                condicao = 1;
            }
    } while (condicao = 0 );

    switch(R){
        case 1: R = 10000;
        break;
        case 2: R = 50000;
        break;
        case 3: R = 100000;
        break;
        case 4: R = 500000;
        break;
        case 5: R = 1000000;
        break;
        case 6: R = 5000000;
        break;
        case 7: R = 10000000;

    }
    v->tamanho = R;

    v->elementos = (int *) calloc(v->tamanho, sizeof(int));
    int i;
    for(i =0; i < v->tamanho; i++){
        v->elementos[i] = rand();
    }

    return v;
}
void Mostrar_Vetor(Vetor v){ //Imprime o Vetor
    int i;
    printf("Vetor = { ");
    for(i = 0; i < v->tamanho; i++){
        printf("%d ", v->elementos[i]);
    }
    printf("}\n");
}
AlgoritmoOrdenacao seleciona_metodo_de_ordenacao(){
    int R = 0, condicao = 0;
    do{
    printf("Escolha um Tamanho do Vetor\n");
    printf("(1)BubbleSort!\n(2)InsertSort\n(3)SelectioSort\n(4)MergerSort\n(5)QuickSort\n");
    printf("Digite uma opcao: ");
    scanf("%d", &R);
    if((R < 1) || (R > 5)){
            printf("Numero incorreto !!\n");
            printf("Por Favor escolha uma opcao\n");
            condicao = 1;
        }
    }while(condicao = 0);

    switch(R){

        case 1: return BubbleSort;
        break;
        case 2: return InsertSort;
        break;
        case 3: return SelectioSort;
        break;
        case 4: return MergeSort;
        break;
        case 5: return QuickSort;
    }
}
double medir_tempo(AlgoritmoOrdenacao ordena, Vetor v){

    clock_t begin = clock();
    ordena(v->elementos, 0, v->tamanho);
    clock_t end = clock();

    return (double) (end-begin)/CLOCKS_PER_SEC;
}
void Deletar_Vetor(Vetor v){
    free(v->elementos);
    free(v);
}

int main(){
    int condicao = 0;

        do{

        // Cria o vetor
        Vetor vetor = novo_vetor();

        // Debug
        // Mostrar_Vetor(vetor);

        // Escolhe o algoritmo de odernca
        AlgoritmoOrdenacao algoritmo = seleciona_metodo_de_ordenacao();

        // Medir tempo do algoritmo
        double tempo = medir_tempo(algoritmo, vetor);
        printf("\nTempo de Execucao: %f s\n", tempo);

        // Debug Depois
        // Mostrar_Vetor(vetor);

        // Libera
        Deletar_Vetor(vetor);


    printf("Deseja Continuar?\n");
    printf("(1)Nao!\n(2)Sim!\n");
    printf("Digite uma opcao: ");
    scanf("%d", &condicao);

    }while(condicao == 2);

}
//Felipe Oliveira Bueno de Camargo
//Renan Goncalves Pereira
//Lucas...
