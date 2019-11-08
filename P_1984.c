#include <stdio.h>

int main(void)
{
  
  long long N;
  int X;

  scanf("%llu", &N);

  do
  {
    X = N % 10;

    printf("%d", X);
    
    N /= 10;
  } while (N != 0);
  
  printf("\n");

  return 0;

}
