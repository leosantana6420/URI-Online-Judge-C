#include <stdio.h>

int main(void)
{

  int A, B, C, X, Y, Z, POSITIVOS;

  scanf("%d %d %d %d %d %d", &A, &B, &C, &X, &Y, &Z);

  if (A > 0)
  {
    POSITIVOS = POSITIVOS + 1;
  }

  if (B > 0)
  {
    POSITIVOS = POSITIVOS + 1;
  }
  
  if (C > 0)
  {
    POSITIVOS = POSITIVOS + 1;
  }

  if (X > 0)
  {
    POSITIVOS = POSITIVOS + 1;
  }

  if (Y > 0)
  {
    POSITIVOS = POSITIVOS + 1;
  }

  if (Z > 0)
  {
    POSITIVOS = POSITIVOS + 1;
  }

  printf("%d valores positivos\n", POSITIVOS);

  return 0;

}
