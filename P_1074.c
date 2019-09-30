#include <stdio.h>

int main(void)
{
  
  int N, X, VALOR;

  scanf ("%d", &N);

  for (VALOR = 1; VALOR <= N; VALOR++)
  {
    scanf ("%d", &X);
    
    if (X == 0)
    {  
      printf("NULL\n");
    } 
    
    else if (X <= 0 && X % 2 == 0)
    {
      printf ("EVEN NEGATIVE\n");
    }
    
    else if (X <= 0 && X % 2 == -1)
    {
      printf ("ODD NEGATIVE\n");
    }
    
    else if (X >= 0 && X % 2 == 0)
    {
      printf ("EVEN POSITIVE\n");
    }
    
    else if (X >= 0 && X % 2 == 1)
    {
      printf ("ODD POSITIVE\n");
    }
  }

  return 0;

}
