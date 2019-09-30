#include <stdio.h>

int main(void)
{

  int I = 1, J = 7, X;
  
  for (X = 1; X <= 3; X++)
  {
    printf("I=%d J=%d\n", I, J--);
  }

  I = I + 2;

  J = 7;
  
  for (X = 1; X <= 3; X++)
  {
    printf("I=%d J=%d\n", I, J--);
  }

  I = I + 2;

  J = 7;
  
  for (X = 1; X <= 3; X++)
  {
    printf("I=%d J=%d\n", I, J--);
  }

  I = I + 2;

  J = 7;
  
  for (X = 1; X <= 3; X++)
  {
    printf("I=%d J=%d\n", I, J--);
  }

  I = I + 2;

  J = 7;
  
  for (X = 1; X <= 3; X++)
  {
    printf("I=%d J=%d\n", I, J--);
  }

  return 0;

}
