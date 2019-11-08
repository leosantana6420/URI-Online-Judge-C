#include <stdio.h>
#include <string.h>

int main (void)
{

  int I, C, N;
  char NOME[20];
  char THOR[5] = "Thor";

  scanf("%d", &C);

  for (I = 1; I <= C; I++)
  {
    scanf("%s %d", NOME, &N);

    if (strcmp(NOME, THOR)==0)
    {
      printf("Y\n");
    }

    else
    {
      printf("N\n");
    }
  }

  return 0;

}
