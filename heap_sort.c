#include <stdio.h>
#include <stdlib.h>

void heapfy(int vet[], int tam, int i)
{
    int troca;
    int maior = i;
    int esq = i*2 + 1;
    int dir = i*2 + 2;

    if(esq < tam && vet[esq] > vet[maior])
	{
        maior = esq;
    }

    if(dir < tam && vet[dir] > vet[maior])
	{
        maior = dir;
    }

    if(maior != i)
	{
        troca = vet[i];
        vet[i] = vet[maior];
        vet[maior] = troca;

        heapfy(vet,tam,maior);
    }
}

void heap_sort(int vet[],int tam)
{

    int temp;

    for(int i = (tam/2) - 1 ; i >= 0 ; i-- )
	{
        heapfy(vet,tam,i);

    }

    
    for(int i = tam-1 ; i >= 0 ; i--)
	{
        temp = vet[0];
        vet[0] = vet[i];
        vet[i] = temp;

        heapfy(vet,i,0);
    }

}

void print_vetor(int vetor[], int tam)
{
    
    for (int i=0; i < tam; i++)
	{
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

int main()
{

    int vet[12];
    int i;
    int tam = 12;

    for (i=0;i<tam;i++)
	{
        vet[i] = rand() % 100 + 1;
    }
    
    printf("Vetor Desordenado: ");
    print_vetor(vet, tam);

    heap_sort(vet, tam);

    printf("Vetor Ordenado: ");
    print_vetor(vet, tam);
    

    return 0;
}
