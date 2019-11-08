#include <stdio.h>

int main(void)
{
  
  char VARIAVEIS[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int I, INICIO = 97;

  for (I = 0; I <= 25; I++)
  {
    printf("%d e %c\n", INICIO, VARIAVEIS[I]);
    INICIO++;
  }
  
  return 0;

}
