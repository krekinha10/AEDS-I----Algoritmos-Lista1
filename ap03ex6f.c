#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Programa para imprimir sequencia de numeros decrescentes menores que X (Questao 6 letra f) \n\n");
    int i, a, X;
    printf("Digite um numero X= ");
    scanf("%d", &X);
    printf("\n");

    for(i=1; i < X; i++)
    {
        a= X - i;
        printf("%d ", a);
    }
    printf("\n");
    return 0;
}
