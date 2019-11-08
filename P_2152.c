#include <stdio.h>

int main (void)
{

  int I, N, H, M, O;

  scanf("%d", &N);

  for (I = 1; I <= N; I++)
  {
    scanf("%d %d %d", &H, &M, &O);
   
    if (O == 0)
    {
      if (H < 10 && M < 10)
      {
        printf("0%d:0%d - A porta fechou!\n", H, M);
      }
      
      else if (H < 10)
      {
        printf("0%d:%d - A porta fechou!\n", H, M);
      }
      
      else if (M < 10)
      {
        printf("%d:0%d - A porta fechou!\n", H, M);
      }

      else
      {
        printf("%d:%d - A porta fechou!\n", H, M);
      }      
    }

    if (O == 1)
    {
      if (H < 10 && M < 10)
      {
        printf("0%d:0%d - A porta abriu!\n", H, M);
      }
      
      else if (H < 10)
      {
        printf("0%d:%d - A porta abriu!\n", H, M);
      }
      
      else if (M < 10)
      {
        printf("%d:0%d - A porta abriu!\n", H, M);
      }

      else
      {
        printf("%d:%d - A porta abriu!\n", H, M);
      }      
    }
  }

  return 0;

}
