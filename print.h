void print_vector(int vector[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%i ", *(vector + i) );
  }

  printf("\n");
}
