#include <stdio.h>

int main(void)
{
  
  int I, N;
  char FRASE[40] = {" LIFE IS NOT A PROBLEM TO BE SOLVED"};
  
  scanf("%d",&N);

  for (I = 1; I <= N; I++)
  {
    printf("%c", FRASE[I]);
  }

  printf("\n");

  return 0;

}
