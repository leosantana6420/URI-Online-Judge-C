#include<stdio.h>

int main(void)
{
  
  int I, N[20];
  
  for (I = 19; I >= 0; I--)
  {
    scanf("%d", &N[I]);
  }
  
  for (I = 0; I < 20; I++)
  {
    printf("N[%d] = %d\n", I, N[I]);
  }
  
  return 0;

}
