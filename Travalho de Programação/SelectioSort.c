int Menu_TamanhoVetor(){ //Escolha a quantidade de Numeros para o tamanho do Vetor
    int R;
    volta:
    R = 0;
    printf("Escolha um Tamanho do Vetor\n");
    printf("(1)10!\n(2)50!\n(3)100!\n(4)500!\n(5)1000!\n(6)5000!\n(7)10000!\n(8)50000!\n(9)100000!\n(10)1000000!\n");
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
        case 2: R = 50;
        break;
        case 3: R = 100;
        break;
        case 4: R = 500;
        break;
        case 5: R = 1000;
        break;
        case 6: R = 5000;
        break;
        case 7: R = 10000;
        break;
        case 8: R = 50000;
        break;
        case 9: R = 100000;
        break;
        case 10: R = 1000000;
    }

    return R;
}
void Numeros_VetorAleatorios(int *V, int N){ //Gera os nuemeros aleatorios para os Vetores
    int i;
    for(i = 0; i < N; i++){
        V[i] = rand();
    }

}
void SelectioSort(int *V, int N){
    int i ,j, menor, troca, contador =0;
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
        contador ++;
    }
    printf("Numeros de comparacoes SelectionSort: %d\n", contador);
}
int main(){
    int *Vetor1, *Vetor2, *Vetor3, *Vetor4, *Vetor5, Tamanho;

    Tamanho = Menu_TamanhoVetor();

    printf("Tamnho do Vetor: %d\n\n", Tamanho);

    Vetor1 = (int *)calloc(Tamanho, sizeof(int));
    Vetor2 = (int *)calloc(Tamanho, sizeof(int));
    Vetor3 = (int *)calloc(Tamanho, sizeof(int));
    Vetor4 = (int *)calloc(Tamanho, sizeof(int));
    Vetor5 = (int *)calloc(Tamanho, sizeof(int));

    Numeros_VetorAleatorios(Vetor1, Tamanho);
    Numeros_VetorAleatorios(Vetor2, Tamanho);
    Numeros_VetorAleatorios(Vetor3, Tamanho);
    Numeros_VetorAleatorios(Vetor4, Tamanho);
    Numeros_VetorAleatorios(Vetor5, Tamanho);

    SelectioSort(Vetor1, Tamanho);
    SelectioSort(Vetor2, Tamanho);
    SelectioSort(Vetor3, Tamanho);
    SelectioSort(Vetor4, Tamanho);
    SelectioSort(Vetor5, Tamanho);

    free(Vetor1);
    free(Vetor2);
    free(Vetor3);
    free(Vetor4);
    free(Vetor5);

    system("pause");
    return 0;
}
