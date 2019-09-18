#include <stdio.h>
#include <string.h>

int main(void)
{
  
  char A[15], B[15], C[15];
  char VERTEBRADO[] = "vertebrado", INVERTEBRADO[] = "invertebrado";
  char AVE[] = "ave", MAMIFERO[] = "mamifero", INSETO[] = "inseto", ANELIDEO[] = "anelideo";
  char CARNIVORO[] = "carnivoro", ONIVORO[] = "onivoro", HERBIVORO[] = "herbivoro", HEMATOFAGO[] = "hematofago";

  scanf("%s %s %s", A, B, C);

  if (strcmp(A,VERTEBRADO)==0 && strcmp(B,AVE)==0 && strcmp(C,CARNIVORO)==0)
  {
    printf("aguia\n");
  }
  
  if (strcmp(A,VERTEBRADO)==0 && strcmp(B,AVE)==0 && strcmp(C,ONIVORO)==0)
  {
    printf("pomba\n");
  }

  if (strcmp(A,VERTEBRADO)==0 && strcmp(B,MAMIFERO)==0 && strcmp(C,ONIVORO)==0)
  {
    printf("homem\n");
  }

  if (strcmp(A,VERTEBRADO)==0 && strcmp(B,MAMIFERO)==0 && strcmp(C,HERBIVORO)==0)
  {
    printf("vaca\n");
  }

  if (strcmp(A,INVERTEBRADO)==0 && strcmp(B,INSETO)==0 && strcmp(C,HEMATOFAGO)==0)
  {
    printf("pulga\n");
  }

  if (strcmp(A,INVERTEBRADO)==0 && strcmp(B,INSETO)==0 && strcmp(C,HERBIVORO)==0)
  {
    printf("lagarta\n");
  }

  if (strcmp(A,INVERTEBRADO)==0 && strcmp(B,ANELIDEO)==0 && strcmp(C,HEMATOFAGO)==0)
  {
    printf("sanguessuga\n");
  }

  if (strcmp(A,INVERTEBRADO)==0 && strcmp(B,ANELIDEO)==0 && strcmp(C,ONIVORO)==0)
  {
    printf("minhoca\n");
  }

  return 0;

}
