#include <stdio.h>

int main(void)
{
  
  int SOMA, IDADE, I = 1;
  float MEDIA;

  while (1)
  {
    scanf("%d", &IDADE);
   
    if (IDADE < 0)
    {
      I -= 1;
      break;
    }
  
    else
    {
      SOMA+=IDADE;
    }
    I += 1;
  }

  MEDIA = ((float)SOMA / (I));

  printf("%.2f\n", MEDIA);

  return 0;

}
