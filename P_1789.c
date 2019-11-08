#include <stdio.h>

int main(void)
{
  
  int L, V, I, MAIOR = 0, AUX;
  int NIVEL;

  while (scanf("%d", &L) != EOF)
  {
    for (I = 1; I <= L; I++)
    {
      scanf("%d", &V);
      
      if (V > MAIOR)
      {
        MAIOR = V;
      }
    }

    if (MAIOR < 10)
    {
      AUX = 1;
    }

    else if (MAIOR >= 20)
    {
      AUX = 3;
    }

    else
    {
      AUX = 2;
    }
    printf("%d\n", AUX);
    AUX = 0;
    MAIOR = 0;
  }

  return 0;

}
