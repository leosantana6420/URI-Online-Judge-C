#include <stdio.h>
#include<stdlib.h>

int main(void)
{

  int A, B, C, MAIORAB;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  MAIORAB = (((A + B) + abs(A - B)) / 2);
  MAIORAB = (((C + MAIORAB) + abs(MAIORAB - C)) / 2);

  printf("%d eh o maior\n", MAIORAB);

  return 0;

}
