#include <stdio.h>

void create_vector(int * vector, int size)
{
      for (int i = 0; i < size; i++)
      {
        scanf("%i", (vector + i));
      }
}
