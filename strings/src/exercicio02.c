#include "stdio.h"

// retorna o tamanho da string
int strtamanho(const char* str) {
  // inicializa indice
  int i = 0;
  // percorre toda string até encontrar o '\0' (indicando que é o fim da string)
  while(str[i]!='\0') ++i; // incrementa o indice para percorrer a string
  
  // retorna final do índice, no caso, o tamanho da string
  return i; 
}

// concatena a string 2 (str2) com a string 1 (str1) o valor fica salvo em str1 
// além disso tambem retorno a string concatenada
char* strconcatena(char* str1, const char* str2) {
  // inicializo o indice que vair ser usado para percorrer a string 2 (str2)
  int j = 0;
  // retorna da primeira string, no caso servira como indice final de str1
  int i = strtamanho(str1);

  while(str2[j]!='\0') {
    str1[i] = str2[j];
    ++i;
    ++j;
  }
  return str1;
}

// compara 2 strings lembrando que:
// 1 string da esquerda eh maior que da direita
// -1 string da direita eh maior que da esquerda
// 0 sao iguais
int strcomparacao(const char* str1, const char* str2) {
  // pego o tamanho de cada string
  int l = strtamanho(str1);
  int r = strtamanho(str2);
  
  // se o tamanho nao for igual ja podemos concluir que sao significa que sao diferentes
  if(r!=l) {
    // qual indice eh maior?
    if(l > r)
      return 1;
    else
      return -1;
  } else {
    // se os tamanhos forem iguais precisamos testar letra por letra
    // como str1 e str2 tem o mesmo tamanho, tanto faz pegar o l ou r
    for(int i = 0 ; i < l ; ++i) {
      if(str1[i]!=str2[i])
        return 2; // valor aleatorio indicando que apesar de terem o mesmo tamanho sao diferents
    }
    // sao iguais porque nao entrou no if acima
    return 0;
  }
}

char* strcopia(char* str1, const char* str2) {
  int i = 0;
  int j = 0;
  // limpo todo o conteudo presente em str1 
  while(str1[i]!='\0') {
    str1[i] = '\0';
    ++i;
  }
  // copia str2 para str1
  while(str2[j]!='\0') {
    str1[j] = str2[j];
    ++j;
  }
  return str1;
}

int main(void) {
  // inicializa a string
  char var[100] = "Teste";
  char var1[100] = "String";
  char var2[20] = "Concatenada";

  // tamanho da string
  printf("%d\n", strtamanho(var));

  // concatenação
  strconcatena(var1, var2);
  printf("%s\n", var1); // ou printf("%s\n", strconcatena(var1, var2););
  
  // comparacao
  if(strcomparacao("hey", "hey") == 0) {
    printf("sao iguais\n");
  } else {
    printf("nao sao iguais\n");
  }

  // copia
  strcopia(var1, "Copia isso para var1");
  printf("%s\n", var1);
  
  return 0;
}