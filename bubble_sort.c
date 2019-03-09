#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

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

void bubble_sort(int numeros[])
{
	int aux;
	for(int contador = 1 ; contador < TAM ; contador++)
	{
		for(int i = 0 ; i < TAM -1 ; i++)
		{
			if(numeros[i] > numeros[i+1])
			{
				aux = numeros[i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = aux;
			}
		}
	}
	imprime_ordenado(numeros);
}

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
