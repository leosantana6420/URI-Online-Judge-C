#include <stdio.h>

int main(void)
{

  int X, I;

  while (1)
  {
    scanf("%d", &X);

    if (X == 0)
    {
      break;
    }

    else
    {
      for (I = 1; I < X; I++)
      {
        printf("%d ", I);
      }
    }
    printf("%d\n", X);
  }

  return 0;

}
