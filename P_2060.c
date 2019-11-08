#include <stdio.h>

int main(void)
{

  int I, N, VETOR[1000], MULTIPLOS_2 = 0, MULTIPLOS_3 = 0, MULTIPLOS_4 = 0, MULTIPLOS_5 = 0;

  scanf("%d", &N);
  
  for (I = 1; I <= N; I++)
  {
    scanf("%d", &VETOR[I]);

    if (VETOR[I] % 2 == 0)
    {
      MULTIPLOS_2 = MULTIPLOS_2 + 1;
    }

    if (VETOR[I] % 3 == 0)
    {
      MULTIPLOS_3 = MULTIPLOS_3 + 1;
    }

    if (VETOR[I] % 4 == 0)
    {
      MULTIPLOS_4 = MULTIPLOS_4 + 1;
    }

    if (VETOR[I] % 5 == 0)
    {
      MULTIPLOS_5 = MULTIPLOS_5 + 1;
    }
  }

  printf("%d Multiplo(s) de 2\n", MULTIPLOS_2);
  printf("%d Multiplo(s) de 3\n", MULTIPLOS_3);
  printf("%d Multiplo(s) de 4\n", MULTIPLOS_4);
  printf("%d Multiplo(s) de 5\n", MULTIPLOS_5);
  
  return 0;

}
