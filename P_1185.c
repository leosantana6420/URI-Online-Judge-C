#include <stdio.h>

int main(void)
{

  float M[12][12];
  int I, J;
  char O;
  float SOMA = 0;

  scanf("%c", &O);
  
  if (O == 'S')
  {
    for (I = 0; I <= 11; I++)
    {
      for (J = 0; J <= 11; J++)
      {
        scanf("%f", &M[I][J]);
      }
    }
    
    for (I = 0; I <= 11; I++)
    {
      for (J = 0; J <= 11; J++)
      {
        if (J + I <= 10)
        {
          SOMA+=M[I][J];
        }
      }
    }
    printf("%.1f\n", SOMA);
  }

  else if (O == 'M')
  {
    for (I = 0; I <= 11; I++)
    {
      for (J = 0; J <= 11; J++)
      {
        scanf("%f", &M[I][J]);
      }
    }
    
    for (I = 0; I <= 11; I++)
    {
      for (J = 0; J <= 11; J++)
      {
        if (J + I <= 10)
        {
          SOMA+=M[I][J];
        }
      }
    }
    printf("%.1f\n", SOMA/66);
  }
  
  return 0;  

}
