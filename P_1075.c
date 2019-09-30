#include <stdio.h>

int main(void)
{
 
  int X, A;
  
  scanf("%d", &X);

  for (A = 1; A <= 10000; ++A)
  {
    if (A % X == 2)
    {
      printf("%i\n", A);
    }
  }

  return 0;

}
