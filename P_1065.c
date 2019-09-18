#include <stdio.h>

int main(void)
{

  int A, B, C, D, E, PARES = 0;

  scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

  if (A % 2 == 0)
  {
    PARES = PARES + 1;
  }

  if (B % 2 == 0)
  {
    PARES = PARES + 1;
  }

  if (C % 2 == 0)
  {
    PARES = PARES + 1;
  }

  if (D % 2 == 0)
  {
    PARES = PARES + 1;
  }

  if (E % 2 == 0)
  {
    PARES = PARES + 1;
  }

  printf("%d valores pares\n", PARES);

  return 0;

}
