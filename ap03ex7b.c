#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char*argv[])

{
    /*Programa utilizando estruturas de repetição para impressão de losangulo inscrito em um quadrado*/
    printf("Programa para imprimir um losangulo inscrito em um quadrado (Questão 7 letra b)\n\n");
    int a, j;
    int i=0;
    int z=0;
    printf("Digite um numero inteiro A= ");
    scanf("%d", &a);
    for (i=1; i<=a; i++)
    {
        for (j=a-i+1; j>=1; j--)
        {
            printf ("*");
        }
        for	(z=1; z<=i-1; z++)
        {
            printf (" ");
        }
        for	(z=1; z<=i-1; z++)
        {
            printf (" ");
        }
        for (j=a-i+1; j>=1; j--)
        {
            printf ("*");
        }
        printf ("\n");
    }
    for (i=1; i<=a; i++)
    {
        for (j=a-i+1; j<=a; j++)
        {
            printf ("*");
        }
        for	(z=1; z<=a-i; z++)
        {
            printf (" ");
        }
        for	(z=1; z<=a-i; z++)
        {
            printf (" ");
        }
        for (j=a-i+1; j<=a; j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}
