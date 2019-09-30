#include <stdio.h>

int main(void)
{

  int A, I = 1, J = 7;

  do
  {
    for (A = 1; A <= 3; A++)
    {
      printf("I=%d J=%d\n", I, J--);
    }
    I = I + 2;
    J = J + 5;
  } while (I != 11);

  return 0;
  
}
