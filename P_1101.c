#include <stdio.h>

int main(void)
{
  
  int M, N, A, SOMA = 0;
  
  while(1)
  {
    scanf("%d %d", &M, &N);
    
    if (M <= 0 || N <= 0)
    {
      break;
    }
    
    else
    {
      SOMA = 0;
      
      if (M < N)
      {
        for (A = M; A <= N; A++)
        {
          printf("%d ", A);
          SOMA+=A;
        }
        printf("Sum=%d\n", SOMA);
      }
      
      else if (M > N)
      {
        for (A = N; A <= M; A++)
        {
          printf("%d ", A);
          SOMA+=A;
        }
        printf("Sum=%d\n", SOMA);
      }
    }
  }
  
  return 0;

}
