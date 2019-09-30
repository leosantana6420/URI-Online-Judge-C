#include <stdio.h>

int main(void)
{

  int X, Y, SOMA = 0;
  
  scanf("%d %d", &X, &Y);
  
  if (X == Y)
  {      
    printf("%d\n", SOMA);
  }
  
  else if (X < Y)
  {    
    for (X = X + 1; X < Y; X++)
    {
      if (X % 2 == 1 || X % 2 == -1)
      {
        SOMA+=X;
      }
    }
    printf("%d\n", SOMA);
  }  
    
  else if (X > Y)
  {
    for (Y = Y + 1; Y < X; Y++)
    {
      if (Y % 2 == 1 || Y % 2 == -1)
      {
        SOMA+=Y;
      }
    }
    printf("%d\n", SOMA);
  }
  
  return 0;

}
