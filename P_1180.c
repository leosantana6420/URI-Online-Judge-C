#include <stdio.h>

int main(void)
{
  
  int N, MENOR = 1000, POSICAO = 0, I;

  scanf("%d", &N);

  int X[N];

  for (I = 0; I < N; I++)
  {
    scanf("%d", &X[I]);

    if (X[I] < MENOR)
    {
      MENOR = X[I];
      POSICAO = I;
    }
  }

  printf("Menor valor: %d\n", MENOR);
  printf("Posicao: %d\n", POSICAO);

  return 0;

}
