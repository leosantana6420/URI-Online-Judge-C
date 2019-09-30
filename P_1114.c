#include<stdio.h>

int main(void)
{
  
  int SENHA;

  do
  {
    scanf("%d", &SENHA);

    if (SENHA == 2002)
    {
      printf("Acesso Permitido\n");
    }

    else
    {
      printf("Senha Invalida\n");
    }
  } while (SENHA != 2002);
  
  return 0;

}
