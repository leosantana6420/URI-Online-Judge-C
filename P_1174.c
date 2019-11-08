#include <stdio.h>

int main(void) 
{
    
  float N[101];
  int I;

  for (I = 0; I < 100; I++)
  {
    scanf("%f", &N[I]);
  }

  for (I = 0; I < 100; I++)
  {
    if (N[I] <= 100)
    {
      printf("A[%d] = %.1f\n", I, N[I]);
    }
  }
  
  return 0;

}
