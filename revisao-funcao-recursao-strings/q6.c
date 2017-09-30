#include<stdio.h>


int buscabinaria(int array[], int limInf, int limSup, int num){
	int meio = limInf + ((limSup-limInf)/2);

	if(limInf > limSup)
		return -1;

	
	if(array[meio] == num){
		return meio;
	} else if (array[meio]>num){
		return buscabinaria(array, limInf, meio-1, num);
	} else {
		return buscabinaria(array, meio+1, limSup, num);
	}
}


int main(){
	int array[] = {0, 1, 2, 2, 3, 4, 5, 6};
	int num;

	printf("Insira o numero que deseja procurar: ");
	scanf("%d", &num);

	printf("\nO valor encontrado no indice: %d", buscabinaria(array, 0, 7, num));


	return 0;
}