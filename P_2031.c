#include <stdio.h>
#include <string.h>

int main(void)
{
  
  int I, N;
  char J_1[10], J_2[10];
  char ATAQUE[10] = "ataque";
  char PAPEL[10] = "papel";
  char PEDRA[10] = "pedra";

  scanf("%d", &N);

  for (I = 1; I <= N; I++)
  {
    scanf("%s %s", J_1, J_2);

    if (strcmp(J_1, ATAQUE) == 0 && strcmp(J_2, PEDRA) == 0)
    {
      printf("Jogador 1 venceu\n");
    }

    else if (strcmp(J_1, PEDRA) == 0 && strcmp(J_2, PAPEL) == 0)
    {
      printf("Jogador 1 venceu\n");
    }

    else if (strcmp(J_1, ATAQUE) == 0 && strcmp(J_2, PAPEL) == 0)
    {
      printf("Jogador 1 venceu\n");
    }

    else if (strcmp(J_1, PAPEL) == 0 && strcmp(J_2, PAPEL) == 0)
    {
      printf("Ambos venceram\n");
    }

    else if (strcmp(J_1, PEDRA) == 0 && strcmp(J_2, PEDRA) == 0)
    {
      printf("Sem ganhador\n");
    }

    else if (strcmp(J_1, ATAQUE) == 0 && strcmp(J_2, ATAQUE) == 0)
    {
      printf("Aniquilacao mutua\n");
    }
    
    else
    {
      printf("Jogador 2 venceu\n");
    }
  }
  
  return 0;

}
