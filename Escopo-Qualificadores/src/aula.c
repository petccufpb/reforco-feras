#include<stdio.h>

/*Questoẽs

1- Criar uma função para trocar os valores de duas variáveis
2-Criar funções para realizar as operações básicas de uma calculadora
3-Identificar o escopo e os qualificadores de tipos e a duração das variáveis.

*/

//Respostas

//*********************************	Questão 1***********************************************


//Função que realiza a troca de variáveis

void troca(int a,int b){
	
	int aux;
	aux = a;
	a=b;
	b=aux;
	printf("O novo valor de a é : %d\n",a);
	printf("O novo valor de b é : %d\n",b);


}

//*********************************	Questão 2***********************************************


//Função que realiza a soma de dois números

double soma (double x, double y){

	return x + y;
}

//Função que realiza a subtração de dois números 

double subtracao (double x, double y){

	return x - y;
}

//Função que realiza a multipicação de dois números

double multiplicacao (double x, double y){

	return x * y;
}

//Função que realiza a divisão de dois números

double divisao (double x, double y){

	return x / y;
}




/**********************************	Questão 3***********************************************
int i; //EP e DA
static int j; //EA e DF
void f(int k){ //f tem EP e
k de bloco
int m; //EB e DA
static short n; //EB e
DF
...
}
*/



int main()
{
	

	troca(1,2);
	printf("A soma é : %f\n",soma(10.0,4.0));
	printf("A subtração é : %f\n",subtracao(10.0,4.0));
	printf("A multiplicação é : %f\n",multiplicacao(10.0,4.0));
	printf("A divisão é : %f\n",divisao(10.0,4.0));


	


	
	return 0;
}

