#include<stdio.h>

int main(void)
{
  
  int X, Y;

  do
  {
    scanf("%d %d", &X, &Y);
    
    if (X > Y)
    {
      printf("Decrescente\n");
    } 
    
    else if (X < Y)
    {
      printf("Crescente\n");
    }
  } while (X != Y);
  
  return 0;

}
