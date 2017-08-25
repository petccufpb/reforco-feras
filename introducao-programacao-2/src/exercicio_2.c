#include "stdio.h"

int main() {

    int soma = 0;
    int i = 0;
    
    for (i = 1; i <= 100; i++) {
        // As duas formas sao equivalentes
        soma += i;
        //soma = soma + i; 
    }
    
    printf("%d", soma);
    return 0;
}