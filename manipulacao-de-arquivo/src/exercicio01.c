#include <stdio.h>

int main()
{
     int i;
     char nome[20], sobrenome[20];
     FILE *stream;
     stream = fopen("teste.txt", "w");

     printf("Entre nome e sobrenome de 10 alunos: \n");

     for (i = 0; i < 10; i++)
     {
          printf("Aluno[%d] - Nome: ", i);
          scanf("%s", nome);

          printf("Aluno[%d] - Sobrenome: ", i);
          scanf("%s", sobrenome);

          fputs(nome, stream);
          fputs(" ", stream);
          fputs(sobrenome, stream);
          fputs("\n", stream);
     }

     fclose(stream);
     return 0;
}
