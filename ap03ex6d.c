#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular o multilos de um numero N menor que um numero X (Questao 6 letra d) \n\n");
    int x, n;
    int i=0;
    int a=0;
    printf("Digite o numero N= ");
    scanf("%d",&n);
    printf("Digite o numero X= ");
    scanf("%d",&x);
    printf("\n");
    while(a<x)// Laço para calculo dos multiplos//
    {
        a = n*i;
        printf("%d", a);
        i++;
        if(a<x)
        {
         printf(",");
        }

    }
    printf("\n");
    return 0;
}
