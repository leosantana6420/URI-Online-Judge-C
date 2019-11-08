#include <stdio.h>
#include <string.h>

int main(void)
{
  
  char L[500];
  int TAMANHO;
  
  scanf("%[^\n]s", L);

  TAMANHO = strlen(L);

  if (TAMANHO > 80)
  {
    printf("NO\n");
  }

  else
  {
    printf("YES\n");
  }
   
  return(0);

}
