#include <stdio.h>

int main(void)
{
  
  long long int N, D;
  
  scanf("%lld", &N);

  D = (N * (N - 3) / 2);

  printf("%lld\n", D);

  return 0;

}
