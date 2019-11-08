#include <stdio.h>

int main(void)
{
  
  int SENHA;

  while (scanf("%d", &SENHA) != EOF)
  {
    printf("%d\n", SENHA - 1);
  }

  return 0;

}
