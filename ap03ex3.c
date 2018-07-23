#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular todos os numeros impares entre dois numeros inteiros qualquer.\n\n");
   int N, M, a;
   printf ("Digite o numero N= ");
   scanf("%d", &N);
   printf ("Digite o numero M= ");
   scanf("%d", &M);

        while(N<=M)//Laço para calcular os numeros impares//
        {
         if((N%2 != 0))
         printf("  %d \n",N);

            N++;
        }
        return 0;

}
