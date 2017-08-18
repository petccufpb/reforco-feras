#include <stdio.h>

int main() {
    int tempo_segundos = 0;

    printf("Digite o tempo total (segundos): ");
    scanf("%d", &tempo_segundos);

    int horas = tempo_segundos / 3600;
    int minutos = (tempo_segundos % 3600) / 60;
    int segundos = (tempo_segundos % 3600) % 60 ;

    printf("%d:%d:%d", horas, minutos, segundos);
    return 0;
}