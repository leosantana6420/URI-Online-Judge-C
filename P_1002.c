#include <stdio.h>
#include <math.h>

int main(void)
{

  double RAIO, AREA;

  scanf("%lf", &RAIO);

  AREA = (3.14159 * pow(RAIO,2));

  printf("A=%.4lf\n", AREA);

  return 0;

}
