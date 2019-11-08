#include <stdio.h>

int main(void)
{

  int N, I, AUX = 100;
  
  int T[N];
  
  scanf("%d", &N);

  for (I = 1; I <= N; I++)
  {
    
    scanf("%d", &T[I]);

    if (T[I] < AUX)
    {
      AUX = I; 
    }
  }

  printf("%d\n", AUX);

  return 0;

}
