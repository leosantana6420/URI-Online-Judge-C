#include <stdio.h>

int main(void)
{
  
  int I, X, Z, SOMA = 0, F;

  scanf("%d %d", &X, &Z);

  if (Z <= X)
  {
    do
    {
      scanf("%d", &Z);
    } while (Z <= X);
  }

  I = X;
  F = 0;
  
  while (SOMA <= Z)
  {
    SOMA += I;
    I++;
    F++;
  }

  printf("%d\n", F);

  return 0;

}
