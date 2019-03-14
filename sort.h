#include <stdlib.h>

void shell_sort(int *vector, int size)
{
 int i, j, value;
 int gap = 1;

 do
 {
   gap = 3 * gap + 1;
 }while(gap < size);

 do
 {
   gap /= 3;
   for(i = gap; i < size; i++)
   {
     value = vector[i];
     j = i - gap;

     while (j >= 0 && value < vector[j])
     {
       vector[j + gap] = vector[j];
       j -= gap;
     }

     vector[j + gap] = value;
  }
 }while(gap > 1);
}

int selection_sort(int *vector, int size){
    int smallest;
    int aux;
    int aux_vect[size] = vector;

    for( int i = 0; i < size-1; i++)
    {
        smallest = i;

        for (int j = i+1; j < size; j++)
        {
            if (aux_vect[j] < aux_vect[smallest])
            {
                smallest = j;
            }
        }
        aux = aux_vect[i];
        aux_vect[i] = aux_vect[smallest];
        aux_vect[smallest] = aux;

    }
    return aux_vect;
}

void quick_sort(int vect[], int beginning, int end)
{
	int i, j, pivot, aux;
	i = beginning;
	j = end-1;
	pivot = vect[(beginning + end) / 2];
	while(i <= j)
	{
		while(vect[i] < pivot && i < end)
		{
			i++;
		}
		while(vect[j] > pivot && j > beginning)
		{
			j--;
		}
		if(i <= j)
		{
			aux = vect[i];
			vect[i] = vect[j];
			vect[j] = aux;
			i++;
			j--;
		}
	}
	if(j > beginning)
		quick_sort(vect, beginning, j+1);
	if(i < end)
		quick_sort(vect, i, end);
}

void merge(int vector[], int beginning, int middle, int end)
{
    int com1 = beginning, com2 = middle+1, com_aux = 0, size = end-beginning+1;
    int *vect_aux;
    vect_aux = (int*)malloc(size * sizeof(int));

    while(com1 <= middle && com2 <= end-1)
	{
        if(vector[com1] < vector[com2])
		{
            vect_aux[com_aux] = vector[com1];
            com1++;
        }
		else
		{
            vect_aux[com_aux] = vector[com2];
            com2++;
        }
        com_aux++;
    }

    while(com1 <= middle)
	{
        vect_aux[com_aux] = vector[com1];
        com_aux++;
        com1++;
    }

    while(com2 <= end)
	{
        vect_aux[com_aux] = vector[com2];
        com_aux++;
        com2++;
    }

    for(com_aux = beginning; com_aux <= end; com_aux++)
	{
        vector[com_aux] = vect_aux[com_aux-beginning];
    }

    free(vect_aux);
}

void merge_sort(int vector[], int beginning, int end)
{
    if (beginning < end)
	{
        int middle = (end+beginning)/2;

        merge_sort(vector, beginning, middle);
        merge_sort(vector, middle + 1, end);
        merge(vector, beginning, middle, end);
    }
}

void insertion_sort(int arr[], int size)
{
	int i, key, j;
	int * vet_aux = arr;
	for (i = 1; i < size; i++)
  {
		key = vet_aux[i];
		j = i - 1;

		while (j >= 0 && vet_aux[j] > key)
		{
			vet_aux[j + 1] = vet_aux[j];
			j = j - 1;
		}
		vet_aux[j + 1] = key;
	}
	arr = vet_aux;
}

void heapfy(int vect[], int size, int i)
{
    int exchange;
    int biggest = i;
    int left = i*2 + 1;
    int right = i*2 + 2;

    if(left < size && vect[left] > vect[biggest])
	{
        biggest = left;
    }

    if(right < size && vect[right] > vect[biggest])
	{
        biggest = right;
    }

    if(biggest != i)
	{
        exchange = vect[i];
        vect[i] = vect[biggest];
        vect[biggest] = exchange;

        heapfy(vect, size, biggest);
    }
}

void heap_sort(int vect[],int size)
{

    int temp;

    for(int i = (size/2) - 1 ; i >= 0 ; i-- )
	{
        heapfy(vect, size, i);

    }


    for(int i = size - 1 ; i >= 0 ; i--)
	{
        temp = vect[0];
        vect[0] = vect[i];
        vect[i] = temp;

        heapfy(vect, i, 0);
    }

}

void counting_sort(int vector[], int size)
{
    int count[size];
    int i,j;

    for(i = 0; i < size; ++i)
        count[vector[i]] = count[vector[i]] + 1;

}

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

void bubble_sort(int numbers[], int size)
{
	int aux;
	for(int counter = 1 ; counter < size ; counter++)
	{
		for(int i = 0 ; i < size -1 ; i++)
		{
			if(numbers[i] > numbers[i+1])
			{
				aux = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = aux;
			}
		}
	}
}
