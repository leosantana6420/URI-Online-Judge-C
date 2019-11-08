#include <stdio.h>
#include <string.h>

int main(void)
{

  int I, T;
  char SHELDON[20], RAJ[20];
  
  scanf("%d", &T);

  for (I = 1; I <= T; I++)
  {
    scanf("%s %s", SHELDON, RAJ);

    if (strcmp(SHELDON, RAJ)==0)
    {
      printf("Caso #%d: De novo!\n", I);
    }

    else
    {
      if (strcmp(SHELDON, "tesoura")==0 && strcmp(RAJ, "papel")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }

      else if (strcmp(SHELDON, "papel")==0 && strcmp(RAJ, "pedra")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }

      else if (strcmp(SHELDON, "pedra")==0 && strcmp(RAJ, "lagarto")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }

      else if (strcmp(SHELDON, "lagarto")==0 && strcmp(RAJ, "Spock")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }

      else if (strcmp(SHELDON, "Spock")==0 && strcmp(RAJ, "tesoura")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }

      else if (strcmp(SHELDON, "tesoura")==0 && strcmp(RAJ, "lagarto")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }

      else if (strcmp(SHELDON, "lagarto")==0 && strcmp(RAJ, "papel")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }
      
      else if (strcmp(SHELDON, "papel")==0 && strcmp(RAJ, "Spock")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }
      
      else if (strcmp(SHELDON, "Spock")==0 && strcmp(RAJ, "pedra")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }

      else if (strcmp(SHELDON, "pedra")==0 && strcmp(RAJ, "tesoura")==0)
      {
        printf("Caso #%d: Bazinga!\n", I);
      }
      
      else
      {
        printf("Caso #%d: Raj trapaceou!\n", I);
      }
    }
  }
  
  return 0;

}
