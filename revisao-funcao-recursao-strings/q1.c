#include<stdio.h>


void num(int val){
	if(val < 1)
		return;		

	num(val - 1);

	printf("%d ", val);
}


int main(){
	int val;

	scanf("%d", &val);

	num(val);

	return 0;
}