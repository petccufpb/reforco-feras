#include <stdio.h>

int main(){
  float n1;

  printf("Digite um numero real: ");
  scanf("%f", &n1);

  if(n1 - ((int)n1) != 0){
    printf("%f o numero eh real", n1 - ((int)n1));
  } else {
    printf("%f o numero eh natural", n1 - ((int)n1));
  }
  return 0;
}
