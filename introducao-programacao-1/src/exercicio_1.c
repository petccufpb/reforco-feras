#include <stdio.h>
#define PI 3.14
int main() {
    float raio = 0;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    float area = PI * raio * raio;
    printf("Area do circulo de raio %.2f eh: %.2f", raio, area);
    return 0;
}