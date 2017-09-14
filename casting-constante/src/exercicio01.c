#include <stdio.h>
#define PI 3.14
#define MINIMO 2
#define MAXIMO 10


int main (){
  float raio, area;

  while(1){
    printf("Qual o raio do circulo?\n");
    scanf("%f", &raio);

    area = PI * raio * raio;
    // area = PI * pow(raio, 2);
    if((raio >= MINIMO) && (raio <= MAXIMO)){
      printf("%.2f", area);
      break;
    } else {
      printf("Valor nao esta entre o intervalo de 2 a 10. Digite novamente.\n");
    }
  }

  return 0;
}
