#include <stdio.h>
#include <string.h>

int main(void)
{
  
  char T[500];
  char TWEET[500];
  int TAMANHO;
  
  scanf("%[^\n]s", T);

  TAMANHO = strlen(T);

  if (TAMANHO > 140)
  {
    printf("MUTE\n");
  }

  else
  {
    printf("TWEET\n");
  }
   
  return(0);

}
