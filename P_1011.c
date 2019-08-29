#include <stdio.h>
#include <math.h>

int main(void)
{

  double RAIO, VOLUME;

  scanf("%lf", &RAIO);

  VOLUME = ((4/3.0) * 3.14159 * pow(RAIO, 3));

  printf("VOLUME = %.3lf\n", VOLUME);

  return 0;

}
