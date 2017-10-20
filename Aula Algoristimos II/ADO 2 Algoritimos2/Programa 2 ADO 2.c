/*
Modifique os algoritmos de ordenação bolha e inserção para contar quantas comparações são feitas durante a ordenação.
Teste a sua modificação e conte quantas comparações são feitas para vetores de tamanho 10, 50, 100, 500, 1000, 5000, 10000, 50000 e 100000 números gerados aleatoriamente.
Gere um gráfico tamanho do vetor x número de comparações.
Qual dos dois algoritmos de ordenação é mais eficiente ?
Qual tem melhor desempenho quando o vetor está ordenado ?
*/

void BubbleSort(int *V, int N){ //Ordenação BubbleSort com a modificação.
    int i, Continua, Aux, Fim = N, Contador = 0;
    do{
        Continua = 0;
        for(i = 0; i < Fim - 1; i++){
            if(V[i] > V[i+1]){
                Aux = V[i];
                V[i] = V[i+1];
                V[i+1] = Aux;
                Continua = 1;
                Contador++;
            }
        }
        Fim--;
    }while(Continua != 0);
    printf("Numeros de comparacoes BubbleSort: %d\n", Contador);
}
void InsertSort(int *V, int N){ //Ordenação InsertSort com a modificação.
    int i, j, Aux, Contador = 0;
    for(i = 1; i < N; i++){
        Aux = V[i];
        for(j = i; (j > 0)&&(Aux < V[j-1]); j--){
            V[j] = V[j-1];
            V[j] = Aux;
        }
        Contador++;
    }
    printf("Numeros de comparacoes InsertSort: %d\n", Contador);
}
void Numeros_VetorAleatorios(int *V, int N){ //Gera os nuemeros aleatorios para os Vetores
    int i;
    for(i = 0; i < N; i++){
        V[i] = rand();
    }

}
int Menu_TamanhoVetor(){ //Escolha a quantidade de Numeros para o tamanho do Vetor
    int R;
    volta:
    R = 0;
    printf("Escolha um Tamanho do Vetor\n");
    printf("(1)10!\n(2)50!\n(3)100!\n(4)500!\n(5)1000!\n(6)5000!\n(7)10000!\n(8)50000!\n(9)100000!\n");
    printf("Digite uma opcao: ");
    scanf("%d", &R);
    if((R < 1) || (R > 9)){
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
    }

    return R;
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
    int *Vetor1, *Vetor2, i, Tamanho;

    Tamanho = Menu_TamanhoVetor();

    printf("Tamnho do Vetor: %d\n\n", Tamanho);

    Vetor1 = (int *)calloc(Tamanho, sizeof(int));
    Vetor2 = (int *)calloc(Tamanho, sizeof(int));

    Numeros_VetorAleatorios(Vetor1, Tamanho);
    Numeros_VetorAleatorios(Vetor2, Tamanho);

    BubbleSort(Vetor1, Tamanho);
    BubbleSort(Vetor2, Tamanho);

    InsertSort(Vetor1, Tamanho);
    InsertSort(Vetor2, Tamanho);

    Mostrar_Vetor(Vetor1, Tamanho);
    Mostrar_Vetor(Vetor2, Tamanho);

    free(Vetor1);
    free(Vetor2);

    system("pause");
    return 0;
}
