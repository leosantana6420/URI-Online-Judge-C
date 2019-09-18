#include <stdio.h>

int main(void)
{

  float A, B, C, X, Y, Z, NUM_A, NUM_B, NUM_C, NUM_X, NUM_Y, NUM_Z, POSITIVOS;
  float MEDIA;

  scanf("%f %f %f %f %f %f", &A, &B, &C, &X, &Y, &Z);

  if (A > 0)
  {
    NUM_A = A;
    POSITIVOS = POSITIVOS + 1;
  }

  if (B > 0)
  {
    NUM_B = B;
    POSITIVOS = POSITIVOS + 1;
  }
  
  if (C > 0)
  {
    NUM_C = C;  
    POSITIVOS = POSITIVOS + 1;
  }

  if (X > 0)
  {
    NUM_X = X;
    POSITIVOS = POSITIVOS + 1;
  }

  if (Y > 0)
  {
    NUM_Y = Y;
    POSITIVOS = POSITIVOS + 1;
  }

  if (Z > 0)
  {
    NUM_Z = Z;
    POSITIVOS = POSITIVOS + 1;
  }

  MEDIA = ((NUM_A + NUM_B + NUM_C + NUM_X + NUM_Y + NUM_Z) / POSITIVOS);
  
  printf("%.0f valores positivos\n", POSITIVOS);
  printf("%.1f\n", MEDIA);

  return 0;

}
