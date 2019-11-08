#include <stdio.h>

int main(void)
{
  
  int X[10], I;

  for (I = 0; I < 10; I++)
  {
    scanf("%d", &X[I]);

    if (X[I] <= 0)
    {
      X[I] = 1;
    }
    printf("X[%d] = %d\n", I, X[I]);
  }

  return 0;

}
