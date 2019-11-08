#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int C, B, P, C_R, B_R, P_R;
  int SOBRA_C, SOBRA_B, SOBRA_P;
  int TOTAL = 0;

  scanf("%d %d %d", &C, &B, &P);
  scanf("%d %d %d", &C_R, &B_R, &P_R);

  SOBRA_C = (C - C_R);
  SOBRA_B = (B - B_R);
  SOBRA_P = (P - P_R);

  if (SOBRA_C < 0)
  {
    TOTAL += SOBRA_C;
  }

  if (SOBRA_B < 0)
  {
    TOTAL += SOBRA_B;
  }

  if (SOBRA_P < 0)
  {
    TOTAL += SOBRA_P;
  }

  printf("%d\n", abs(TOTAL));  
  
  return 0;

}
