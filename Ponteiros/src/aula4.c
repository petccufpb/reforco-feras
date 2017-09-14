/****************************************
* Aula de Reforço aos Feras - 2017.1
*
* Aula 4 - Ponteiros
* Data: 08/09/2017
* Autor: Matheus M. R. Praxedes
*
*****************************************/

#include "stdio.h"

int main(void){

	int var1 = 10;
	int var2 = 30;

	int* p1  = &var1;
	int* p2  = &var2;

	printf("\nEndereco do ponteiro 1: %p", &p1);
	printf("\nEndereco do ponteiro 2: %p", &p2);
	printf("\nEndereco da variavel 1: %p", &var1);
	printf("\nEndereco da variavel 2: %p", &var2);
	printf("\nEndereco da variavel 1 que o ponteiro 1 aponta: %p", p1);
	printf("\nEndereco da variavel 2 que o ponteiro 2 aponta: %p", p2);
	printf("\nConteudo do endereco apontado por p1: %d", *p1);
	printf("\nConteudo do endereco apontado por p2: %d\n", *p2);

	return 0;
}
