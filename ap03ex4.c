#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para montar um triangulo de numeros crescentes com uma base com N termos \n\n ");
    int N, b, c;
    int a = 1;
    printf("Digite um numero N= ");
    scanf("%d", &N);
    printf("\n");

    for (b = 1; b <= N; b++)//Laço para montagem do triangulo//
   {
    for (c = 1; c <= b; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }

  return 0;
}
