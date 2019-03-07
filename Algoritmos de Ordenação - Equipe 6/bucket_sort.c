#include <stdio.h>
#include <stdlib.h>

 
struct bucket 
{
    int count;
    int* value;
};
 
int compare_integers(const void* first, const void* second)
{
    int x = *((int*)first), y =  *((int*)second);
    if (x == y)
    {
        return 0;
    }
    else if (x < y)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
 
void bucket_sort(int array[],int n)
{
    struct bucket buckets[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        buckets[i].count = 0;
        buckets[i].value = (int*)malloc(sizeof(int) * n);
    }
    
    for (i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            buckets[0].value[buckets[0].count++] = array[i];
        }
        else if (array[i] > 10)
        {
            buckets[2].value[buckets[2].count++] = array[i];
        }
        else
        {
            buckets[1].value[buckets[1].count++] = array[i];
        }
    }
    for (k = 0, i = 0; i < 3; i++)
    {
        qsort(buckets[i].value, buckets[i].count, sizeof(int), &compare_integers);
        for (j = 0; j < buckets[i].count; j++)
        {
            array[k + j] = buckets[i].value[j];
        }
        k += buckets[i].count;
        free(buckets[i].value);
    }
}
 
int main(char *arg[]) {
 
    int array[100];
    int i,j,k,n,qtd;

	printf("Quantidade de elementos para serem ordenados: ");
  	scanf("%d", &qtd);
	 	
 	for(i = 0; i < qtd; i++)
 	{
  		printf("Digite um valor: ");
  		scanf("%d", &array[i]);
 	}
 	
    n=i;
    printf("Não ordenado: \n");
    for (j = 0; j<i; j++)
    {
        printf("%d ", array[j]);
    }
 
    bucket_sort(array, n); 
    printf("\nOrdenados: \n");
    for (k = 0; k<i; k++)
        printf("%d ", array[k]);   
    
    printf("\n");
    return 0;
}
