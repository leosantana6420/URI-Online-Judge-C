#include <stdio.h>

int main(void)
{
  
  int N, X = 1;
  float NOTA1, NOTA2, NOTA3, MEDIA;

  scanf("%d",&N);
  
  while (X <= N)
  {
    scanf("%f %f %f", &NOTA1, &NOTA2, &NOTA3);
    MEDIA = ((NOTA1 * 2 + NOTA2 * 3 + NOTA3 * 5) / 10);
    printf("%.1f\n", MEDIA);
    X++;
  }  
   
  return 0;

}
