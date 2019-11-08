#include <stdio.h>

int main(void)
{  
  
  int X, N[2001], Q, I;

  for (I = 0; I <= 2001; I++)
  {
    N[I] = 0;
  }

  scanf("%d", &Q);

  for (I = 0; I < Q; I++)
  {
    scanf("%d", &X);
    
    N[X] += 1;
  }

  for (I = 1; I <= 2001; I++)
  {
    if (N[I] > 0)
    {
      printf("%d aparece %d vez(es)\n", I, N[I]);
    }
  }
  
  return 0;
  
}
