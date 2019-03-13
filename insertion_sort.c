#include <stdio.h>
#include <math.h>
#define TAM 1000
int insertion_sort(int arr[])
{
	int i, key, j;
	int vet_aux[TAM] = arr;
	for (i=1; i<TAM; i++)
    	{
		key = vet_aux[i];
		j=i-1;

		while (j>=0 && vet_aux[j]>key)
		{
			vet_aux[j+1] = vet_aux[j];
			j = j-1;
		}
		vet_aux[j+1] = key;
	}
	return vet_aux;
}
/*
void imprimir(int arr[], int n)
{
	int i;

	for(i=0;i<n;i++)
    {
        printf("Indice[%d]Numero:[%d]\n",i,arr[i]);
	}
	printf("\n\n\n");
}

int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(int);
	printf("Vetor sem ordencao: \n");
	imprimir(arr, n);
	in_sort(arr, n);
	printf("Vetor com insertion sort: \n");
	imprimir(arr, n);

	return 0;

}
*/
