#include<stdio.h>
#include<string.h>


int testepalindromo(char palavra[], int contador){
    
	if(contador+1 == strlen(palavra) || contador > (strlen(palavra)-2)/2)
		return 1;

    if(palavra[contador] == palavra[strlen(palavra) - (contador+2)]){
    	return testepalindromo(palavra, contador+1);
    } else {
    	 return 0;
    }   
}


int main(){
	int tamanhoarray = 10, contador = 0;
	char palavra[tamanhoarray];

	printf("Insira a palavra que gostaria de tester: ");
	fgets(palavra, tamanhoarray, stdin);


	printf("\n");
	printf("A palavra e um palindromo? ");

	if(testepalindromo(palavra, contador)){
		printf("Sim\n");
	} else {
		printf("Nao\n");
	}

	return 0;
}