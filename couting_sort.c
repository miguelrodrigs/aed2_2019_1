#include "io.h"
/*
void max_element(int vector[], int size)
{
  int max = 0;
  for int (i = 0; i < size; i++)
  {
    if (max < vector[i])
      max = vector[i];
  }
}
*/
void counting_sort(int vector[], int size)
{
    int count[size];
    int i,j;

    for(i = 0; i < size; ++i)
        count[vector[i]] = count[vector[i]] + 1;

}

int main()
{
    /*
    int a[50], n, i, max = 0;
    printf("Insira a quantidade de elementos: ");
    scanf("%d", &n);

    for( i =0; i < n; ++i)
    {
        printf("Insira o numero: ");
        scanf("%d", &a[i]);
        if(a[i] > max)
            max = a[i];
    }

    counting_sort(a, n, max);
    printf("\n");
    return 0;
    */
}
