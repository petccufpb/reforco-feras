#include <stdio.h>

int main() {

    int n = 0;
    int maior = -2147483648; // Menor valor possivel do tipo int

    do {
        scanf("%d", &n); // Lendo valor

        if (n > maior) {
            maior = n;
        }

    } while(n != 0);

    printf("%d", maior);
    return 0;
}