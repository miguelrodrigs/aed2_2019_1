#include "print.h"

void print(int vetor[],int tam)
{
    for (int i=0; i < tam; i++)
	{
        printf("%i ", vetor[i]);
    }
    printf("\n");
}
