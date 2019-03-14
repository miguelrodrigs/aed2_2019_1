#include <stdio.h>
#define TAM 1000

void create_vector(int * vector, int size)
{
      for (int i = 0; i < size; i++)
      {
        scanf("%i", (vector + i));
      }
}

void print_vector(int vector[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%i ", *(vector + i) );
  }

  printf("\n");
}
