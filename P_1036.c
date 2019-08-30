#include <stdio.h>
#include <math.h>

int main(void)
{

  double A, B, C, DELTA, X1, X2;

  scanf("%lf %lf %lf", &A, &B, &C);

  DELTA = (pow(B,2) - (4 * A * C));
  
  if (DELTA > 0 && A > 0)
  {
    X1 = ((-(B) + sqrt(DELTA)) / (2 * A));
    X2 = ((-(B) - sqrt(DELTA)) / (2 * A));

    printf("R1 = %.5lf\n",X1);
    printf("R2 = %.5lf\n",X2);
  }
  
  else
  {
    printf("Impossivel calcular\n");
  }
  
  return 0;

}
