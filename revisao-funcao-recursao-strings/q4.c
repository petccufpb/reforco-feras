#include<stdio.h>


int fibonacci(int val){
	if(val == 0)
		return 0;
	else if(val == 1)
		return 1;
	else 
		return fibonacci(val-1) + fibonacci(val-2);
}


int main(){
	int val;

	printf("Informe o valor desejado: ");
	scanf("%d", &val);

	printf("\n");
	printf("Fibonacci de %d: %d\n\n", val, fibonacci(val));

	return 0;
}