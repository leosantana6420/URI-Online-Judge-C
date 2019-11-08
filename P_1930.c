#include <stdio.h>

int main(void)
{
  
  int N, T_1, T_2, T_3, T_4;

  scanf("%d %d %d %d", &T_1, &T_2,&T_3, &T_4);

  N = ((T_1 - 1) + (T_2 - 1) + (T_3 - 1) + T_4);

  printf("%d\n", N);

  return 0;

}
