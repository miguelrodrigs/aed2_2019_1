#include "io.h"

#define TAM 1000

int * bubble_sort(int numbers[])
{
	int aux;
	for(int counter = 1 ; counter < TAM ; counter++)
	{
		for(int i = 0 ; i < TAM -1 ; i++)
		{
			if(numbers[i] > numbers[i+1])
			{
				aux = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = aux;
			}
		}
	}
	return numbers;
}

int main ()
{
	int vector[TAM];
	create_vector(vector, TAM);
	bubble_sort(vector);
	print_vector(vector, TAM);
}
