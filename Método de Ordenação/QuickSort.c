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
void Numeros_VetorAleatorios(int *V, int N){ //Gera os nuemeros aleatorios para os Vetores
    int i;
    for(i = 0; i < N; i++){
        V[i] = rand();
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

    QuickSort(Vetor1, 0, Tamanho);

    Mostrar_Vetor(Vetor1, Tamanho);


    free(Vetor1);

    system("pause");
    return 0;
}
