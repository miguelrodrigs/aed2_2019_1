#include <stdio.h>
#include <stdlib.h>

void merge(int vetor[], int comeco, int meio, int fim) 
{
    int com1 = comeco, com2 = meio+1, com_aux = 0, tam = fim-comeco+1;
    int *vet_aux;
    vet_aux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim-1)
	{
        if(vetor[com1] < vetor[com2])
		{
            vet_aux[com_aux] = vetor[com1];
            com1++;
        } 
		else 
		{
            vet_aux[com_aux] = vetor[com2];
            com2++;
        }
        com_aux++;
    }

    while(com1 <= meio)
	{
        vet_aux[com_aux] = vetor[com1];
        com_aux++;
        com1++;
    }

    while(com2 <= fim)
	{
        vet_aux[com_aux] = vetor[com2];
        com_aux++;
        com2++;
    }

    for(com_aux = comeco; com_aux <= fim; com_aux++)
	{
        vetor[com_aux] = vet_aux[com_aux-comeco];
    }

    free(vet_aux); 
}

void print_vetor(int vetor[], int tam)
{

    for (int i=0; i < tam; i++)
	{
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

void merge_sort(int vetor[], int comeco, int fim)
{
    if (comeco < fim) 
	{
        int meio = (fim+comeco)/2;

        merge_sort(vetor, comeco, meio);
        merge_sort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}

int main()
{
    int vet[12];
    int tam = 12;

    for (int i=0;i<tam;i++)
	{
        vet[i] = rand() % 100 + 1; 
    }

    printf("Vetor Desordenado");
    print_vetor(vet, tam);

    merge_sort(vet, 0, tam);

    printf("Vetor Ordenado: ");
    print_vetor(vet, tam);

    return 0;
}
