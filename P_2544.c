#include <stdio.h>
#include <math.h>

int main(void)
{
  
  int N;

  while (scanf("%d", &N) != EOF)
  {
    int A = log2(N);
    printf("%d\n", A);
  }

  return 0;

}
