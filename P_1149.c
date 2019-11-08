#include <stdio.h>

int main(void)
{
  
  int X, N, I, SOMA = 0;
  
  scanf("%d %d", &X, &N);
  
  while (N <= 0)
  {
    scanf("%d", &N);
  }
  
  for (I = 1; I <= N; I++)
  {
    SOMA+=X;
    X++;
  }
  
  printf("%d\n", SOMA);
  
  return 0;

}
