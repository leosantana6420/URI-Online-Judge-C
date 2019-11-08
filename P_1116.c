#include <stdio.h>

int main (void)
{

  int X, Y, N, I = 0;
  float DIVISAO;

  scanf("%d", &N);

  for (I = 1; I <= N; I++)
  {
    scanf("%d", &X);
    scanf("%d", &Y);

    if (Y == 0)
    {
      printf("divisao impossivel\n");
    }

    else
    {
      DIVISAO = (float) X / Y;
      printf("%.1f\n", DIVISAO);
    }
  }

  return 0;

}
