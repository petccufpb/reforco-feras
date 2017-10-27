#include <stdio.h>

int main()
{
     FILE *stream;

     int A[20], B[20], i;
     char aux[10];

     stream = fopen("teste2.txt", "w");

     printf("Digite 20 numeros: \n");
     for (i = 0; i < 20; i++)
     {
          scanf("%d", &A[i]);
          fprintf(stream, "%d\n", A[i]);
     }

     fclose(stream);

     stream = fopen("teste2.txt", "r");

     printf("\nLendo 20 numeros: \n");
     for (i = 0; i < 20; i++)
     {
          fscanf(stream, "%d", &B[i]);
          printf("%d ", B[i]);
     }

     fclose(stream);
     printf("\n");
     return 0;
}
