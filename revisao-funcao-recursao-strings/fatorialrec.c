
#include<stdio.h>

int fatorial(int valor)
{
	if(valor < 2)
	{
		return 1;
	}

	return (valor*fatorial(valor-1));
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


