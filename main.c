#include "io.h"
#include "sort.h"
#define TAM 1000

int main(){
  int vector[TAM];
  create_vector(vector, TAM);
  selection_sort(vector, TAM);
  print_vector(vector, TAM);
}
