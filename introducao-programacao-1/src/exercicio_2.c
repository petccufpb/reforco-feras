#include <stdio.h>
int main() {
    float potencia = 18;
    float largura = 0, comprimento = 0;

    printf("Digite a largura: ");
    scanf("%f", &largura);
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    float area = largura * comprimento;
    float potencia_necessaria = area * potencia;
    printf("A potencia necessaria eh:  %.2f", potencia_necessaria);
    return 0;
}