#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void povoa_vetor(int *vetor);
void imprime_vetor(int *vetor);
void selection_sort(int *vetor);

int main()
{
    int vetor[TAM];
    int aux;

    povoa_vetor(vetor);
    selection_sort(vetor);
    imprime_vetor(vetor);

    system("pause");
    return 0;
}

void povoa_vetor(int *vetor)
{
    int aux;
    srand ( time(NULL) );
    for ( aux = 0; aux < TAM; aux++)
        {
        vetor[aux] = (rand() % 89) + 10;
        printf(" %d,",vetor[aux]);
        }
}

void imprime_vetor(int *vetor)
{
    int aux;
    printf("\n\n");
    for ( aux = 0; aux < TAM; aux++)
    {
        printf(" %d,", vetor[aux]);
    }
    printf("\n\n ");

}

void selection_sort(int *vetor){
    int menor;
    int aux;

    for( int i = 0; i < TAM-1; i++)
    {
        menor = i;

        for (int j = i+1; j < TAM; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;

    }
}
