#include <stdio.h>

int main(void)
{

  int A, B;
  float COMPRA;

  scanf("%d", &A);
  scanf("%d", &B);

  switch (A)
  {
  	
    case (1):

    COMPRA = (4.00 * B);
    break;

    case (2):

    COMPRA = (4.50 * B);
    break;

    case (3):

    COMPRA = (5.00 * B);
    break;

    case (4):

    COMPRA = (2.00 * B);
    break;

    case (5):

    COMPRA = (1.50 * B);
    break;

  }

  printf("Total: R$ %.2f\n", COMPRA);

  return 0;

}
