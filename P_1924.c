#include <stdio.h>

int main (void)
{

  int I, N;
  char NOME_CURSO[30];

  scanf("%d", &N);

  for (I = 1; I <= N; I++)
  {
    scanf("%s", NOME_CURSO);
  }

  printf("Ciencia da Computacao\n");

  return 0;

}
