#include <stdio.h>

int main(void)
{
  
  int VALOR, N[10], I;

  scanf("%d", &VALOR);
  
  printf("N[0] = %d\n", VALOR);
  
  for (I = 1; I < 10; I++)
  { 
    VALOR = (VALOR * 2);
    printf("N[%d] = %d\n", I, VALOR);
  }

  return 0;

}
