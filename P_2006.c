#include <stdio.h>

int main(void)
{
  
  int T, A, B, C, D , E, TOTAL = 0;

  scanf("%d", &T);

  scanf("%d", &A);

  if (A == T)
  {
    TOTAL = TOTAL + 1;
  }
  
  scanf("%d", &B);

  if (B == T)
  {
    TOTAL = TOTAL + 1;
  }
  
  scanf("%d", &C);

  if (C == T)
  {
    TOTAL = TOTAL + 1;
  }
  
  scanf("%d", &D);

  if (D == T)
  {
    TOTAL = TOTAL + 1;
  }
  
  scanf("%d", &E);

  if (E == T)
  {
    TOTAL = TOTAL + 1;
  }

  printf("%d\n", TOTAL);

  return 0;

}
