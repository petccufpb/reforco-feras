#include <stdio.h>

#define MAX 3

typedef struct {
  int dia; // 1-31
  int mes; // 1-12
  int ano; 
} tData;

typedef struct {
  char nome[100];
  int idade;
  char matricula[15];
  tData dataNascimento;
} tAluno;

int main(void) {
  tAluno aluno[MAX];

  for(int i = 0 ; i < MAX ; ++i) {
    printf("Digite seu nome: ");
    scanf("%s", aluno[i].nome); 
    printf("Digite sua idade: ");
    scanf("%d", &aluno[i].idade);
    printf("Digite sua matricula: ");
    scanf("%s", aluno[i].matricula);
    printf("Digite o dia de nascimento: ");
    scanf("%d", &aluno[i].dataNascimento.dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &aluno[i].dataNascimento.mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &aluno[i].dataNascimento.ano);
  }

  for(int i = 0 ; i < MAX ; ++i) {
    printf("> Dados do %dº Aluno \n", i+1);
    printf("Nome: %s\n", aluno[i].nome);
    printf("Idade: %d\n", aluno[i].idade);
    printf("Matricula: %s\n", aluno[i].matricula);
    printf("Dia de Nascimento: %d/%d/%d\n", aluno[i].dataNascimento.dia, aluno[i].dataNascimento.mes, aluno[i].dataNascimento.ano);
  }
  return 0;
}