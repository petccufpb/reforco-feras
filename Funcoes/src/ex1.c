#include "stdio.h"

int fatorial(int n){

    int fat;
    int i;

        for (fat = 1; n > 1; n--) {
            fat = fat * n;
        }

    return fat;
}

int main(){

    int n = 0;
    int fat = 0;
    printf("Insira o valor para calcular seu fatorial: ");
    scanf("%d",&n);

    printf("Resultado do Fatorial de %d é: %d", n, fatorial(n));

    return 0;

}
