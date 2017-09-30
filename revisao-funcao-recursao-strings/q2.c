#include<stdio.h>


int soma(int val){
	if(val < 1)
		return 0;

	return  val + soma(val-1);
}


int main(){
	int val;

	printf("Informe o valor desejado: ");
	scanf("%d", &val);

	printf("\n");
	printf("Soma de 1 ate %d: %d\n\n", val, soma(val));

	return 0;
}