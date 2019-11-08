#include <stdio.h>

int main (void)
{

  int N, I = 0, POTENCIA, CUBO;

  scanf("%d", &N);

  for (I = 1; I <= N; I++)
  {
    if (I <= N)
    {
      POTENCIA = I * I;
      CUBO = I * I * I;
      printf("%d %d %d\n", I, POTENCIA, CUBO);
    } 
  }

  return 0;

}
