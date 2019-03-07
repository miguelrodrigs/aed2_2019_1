#include <stdio.h>
#include <math.h>

void in_sort(int arr[], int n)
{
	int i, key, j;
	for (i=1; i<n; i++)
    {
		key = arr[i];
		j=i-1;

		while (j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

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
