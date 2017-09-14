#include <stdio.h>

int main (){
  int n1, n2, n3;
  float n4, n5;

  printf("Digite 3 numeros inteiros: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  //nn1 = (float) n1;
  //nn2 = (float) n2;
  //nn3 = (float) n3;
  n4 = (float)n1/(float) n2;
  n5 = n4 * (float)n3;
  
  printf("%f %f %f %f", n5, (float) n1, (float) n2, (float) n3);

  return 0;
}
