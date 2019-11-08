#include <stdio.h>

int main(void)
{

  int I, N, A;

  scanf("%d", &N);

  for (I = 1; I <= N; I++)
  {
    scanf("%d", &A);

    if (A % 2 == 0)
    {
      printf("0\n");
    }

    else
    {
      printf("1\n");
    }
  } 

  return 0;

}
