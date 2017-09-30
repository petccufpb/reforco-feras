
#include<stdio.h>

int fatorial(int valor)
{
	int resultado = 1, i;

	for( i = 2; i <= valor; i++ )
	{ 
	     resultado *= i;
	}

	return resultado;
}



int main()
{
	int fat, resultado;

	printf("Informe um valor: ");
	scanf("%d", &fat);

	resultado = fatorial(fat);

	printf("\n");
	printf("Resultado: %d \n\n", resultado);

	return 0;
}