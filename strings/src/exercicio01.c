#include "stdio.h"
#include "string.h"

// o parametro poderia ser apenas char* str, ou char str[]
void imprime_com_quebra_de_linha(const char* str) {
  // inicializa indice
  int i = 0;
  
  // varrendo toda a string depedendo do seu tamanho `strlen()`
  for(i = 0; i < strlen(str) ; ++i) {
    // imprime o caractere e quebra a linha
    printf("%c\n", str[i]);
  }
}

int main(void) {
  // inicializa a string
  char var[100] = "Teste";

  // fgets(var, 100, stdin); poderia usar fgets <3

  // chama funcao que imprime com quebra de linha
  imprime_com_quebra_de_linha(var);

  return 0;
}