#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para imprimir um triangulo de caracteres (Questao 7 letra a) \n\n");
    int N, b, c;
    int a = 1;
    printf("Digite um numero N= ");
    scanf("%i", &N);
    printf("\n");

    for (b = N; b > 0; b--)
   {
    for (c = b; c > 0; c--)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
