#include <stdio.h>

int main(void)
{
  
  double A, B, AUMENTO;

  scanf("%lf %lf", &A, &B);

  AUMENTO = (((B - A) / A) * 100);

  printf("%.2lf%%\n", AUMENTO);
  
  return 0;

}
