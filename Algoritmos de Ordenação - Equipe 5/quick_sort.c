#include <stdio.h>
#include <stdlib.h>

void quick_sort(int vet[], int com, int fim)
{
	int i, j, pivo, aux;
	i = com;
	j = fim-1;
	pivo = vet[(com + fim) / 2]; 
	while(i <= j) 
	{
		while(vet[i] < pivo && i < fim) 
		{
			i++;
		}
		while(vet[j] > pivo && j > com) 
		{
			j--;
		}
		if(i <= j) 
		{
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
			i++;
			j--;
		}
	}
	if(j > com)
		quick_sort(vet, com, j+1);
	if(i < fim)
		quick_sort(vet, i, fim);
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
    int tam = 12;

    for (int i=0;i<tam;i++)
	{
        vet[i] = rand() % 100 + 1;
    }

    printf("Vetor Desordenado: ");
    print_vetor(vet, tam);

    quick_sort(vet,0,tam);

    printf("Vetor Ordenado:");
    print_vetor(vet, tam);

    return 0;
}
