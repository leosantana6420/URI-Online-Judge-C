#include <stdio.h>

int main(void)
{
  
  float NOTA1, NOTA2, NOTA3, NOTA4, MEDIA, NOTA_EXAME, MEDIA_FINAL;

  scanf("%f %f %f %f", &NOTA1, &NOTA2, &NOTA3, &NOTA4);

  MEDIA = ((NOTA1 * 2 + NOTA2 * 3 + NOTA3 * 4 + NOTA4 * 1) / 10);

  printf("Media: %.1f\n", MEDIA);

  if (MEDIA >= 7)
  {
    printf("Aluno aprovado.\n");
  }

  else if (MEDIA < 5)
  {
    printf("Aluno reprovado.\n");
  }

  else if (MEDIA >= 5 && MEDIA <= 6.9)
  {
    printf("Aluno em exame.\n");
    scanf("%f", &NOTA_EXAME);
    printf("Nota do exame: %.1f\n", NOTA_EXAME);

    MEDIA_FINAL = ((MEDIA + NOTA_EXAME) / 2);

    if (MEDIA_FINAL >= 5)
    {
      printf("Aluno aprovado.\n");
    }
    
    else if (MEDIA_FINAL <= 4.9)
    {
      printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1f\n", MEDIA_FINAL);
  }

  return 0;

}
