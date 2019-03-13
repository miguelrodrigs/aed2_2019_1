#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 1000
/*
void imprimir()
{
	printf("Entre com 5 numeros:\n");	
}

void imprime_ordenado(int numeros[])
{	
	for(int i = 0 ; i < TAM; i++)
	{
		printf("%4d", numeros[i]);
	}
}
*/
int bubble_sort(int numeros[])
{
	int aux;
	int aux_vet[TAM] = numeros
	for(int contador = 1 ; contador < TAM ; contador++)
	{
		for(int i = 0 ; i < TAM -1 ; i++)
		{
			if(aux_vet[i] > aux_vet[i+1])
			{
				aux = aux_vet[i];
				aux_vet[i] = aux_vet[i+1];
				aux_vet[i+1] = aux;
			}
		}
	}
	return aux_vet
}
/*
void leitura()
{
	int numeros[TAM];	
	int i;	
	for(int i = 0 ; i< TAM ; i++ )
    {
		scanf("%d", &numeros[i]);
	}
	bubble_sort(numeros);
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	imprimir();
	leitura();		
	
	return 0;
}
*/
