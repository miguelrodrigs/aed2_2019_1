#include "io.h"
// #include <stdlib.h>

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
/*
int main()
{

    int vect[12];
    int i;
    int size = 12;

    for (i=0;i<size;i++)
	{
        vect[i] = rand() % 100 + 1;
    }

    printf("vector Desordenado: ");
    print_vector(vect, size);

    heap_sort(vect, size);

    printf("vector Ordenado: ");
    print_vector(vect, size);

  int vector[1000];

  create_vector(vector, 1000);
  heap_sort(vector, 1000);
  print_vector(vector, 1000);

    return 0;
}
*/
