#include <stdio.h>

int main(void)
{

  int N, X = 1, VALOR, IN = 0, OUT = 0;

  scanf("%d", &N);

  while (X <= N)
  {
    scanf("%d", &VALOR);
    
    if (VALOR >= 10 && VALOR <= 20)
    {
      IN = IN + 1;
    }
    
	else
    {
      OUT = OUT + 1;
    }
    X++;
  }

  printf("%d in\n", IN);
  printf("%d out\n", OUT);

  return 0;

}
