#include <stdio.h>

int main (void)
{

  int I, N, R_1, R_2;

  scanf("%d", &N);
  
  for (I = 1; I <= N; I++)
  {
    scanf("%d %d", &R_1, &R_2);
    printf("%d\n", R_1 + R_2);
  }
  
  return 0;

}
