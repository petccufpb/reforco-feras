#include <stdio.h>
#include <string.h>

void main(){
    int len = 5, vogais, cons;
    char str[len];
    
    printf("Insira a string desejada: ");
    fgets(str, len, stdin);	

    vogais = 0;
    cons = 0;
    
    int i = 0;
    for(; i<len; i++){
        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vogais++;
        } else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            cons++;
        }
    }

    printf("\nA string possui %d vogais e %d consoantes \n", vogais, cons);
}