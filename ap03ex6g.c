#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular a soma os termos de uma PA de N termos (Questao 6 letra g) \n\n");
    int a, r, n, b;
    int s = 0;
    int i = 0;
    printf("Digite o primeiro termo da PA= ");
    scanf("%d", &a);
    printf("Digite a razao da PA= ");
    scanf("%d", &r);
    printf("Digite os numeros de termos da PA= ");
    scanf("%d", &n);
    printf("\n");

    while (i < n)
    {
        b = a+i*r;
        s+= b;
        i++;
    }
    printf("A soma dos termos da PA e %d \n\n", s);


    return 0;
}
