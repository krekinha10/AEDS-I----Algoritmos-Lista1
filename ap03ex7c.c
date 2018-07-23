#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char*argv[])

{
    printf("Programa para criar um arte com losangulos e um X de caracteres (Questao 7 letra c) \n\n");
    int d,n,i,k,c;
    int vazio=0;
    printf("Digite um numero N= ");
    scanf("%d",&n);
    printf("\n");


    vazio=2*n-2;
    k=vazio;


    for (d = 1; d <= n; d++)
    {

        for (i = 0; i < d; i++)
        {
            printf(" ");

        }
        printf("\\");

        for (c=0; c < k; c++)
        {
            printf(" ");
        }
        k =vazio-2*d;

        for (c = 1; c <= 2*d-1; c++)
        {
            printf("*");
        }

        for (c=0; c < k+2; c++)
        {
            printf(" ");
        }
        printf("/");
        printf("\n");
    }

    k=1;
    for ( ; d <= 2*n-1; d++)
    {

        for (i = 0; i < d; i++)
        {
            printf(" ");
        }
        printf("\\");


        for (c = 1 ; c <= 2*(n-k)-1; c++)
        {
            printf("*");
        }
        k++;
        printf("/");
        printf("\n");

    }


    for (c = 1; c <= k; c++)
    {

        for(d=i; d>0; --d)
        {
            printf(" ");
        }
        i--;
        printf("/");
        for (n = 1; n <= 2*c-1; n++)
        {
            printf("*");
        }
        printf("\\");
        printf("\n");

    }


    for (d=1; d<k; d++ )
    {
        for(c=i; c>0; c--)

        {
            printf(" ");
        }
        printf("/");
        i--;
        for (n = 1; n <= 2*d-1; n++)
        {
            printf(" ");
        }
        printf(" ");

        for( vazio=1 ; vazio<=2*(k-d)-1;  vazio++ )
        {
            printf("*");
        }
        printf(" ");

        for (n = 1; n <= 2*d-1; n++)
        {
            printf(" ");
        }
        printf("\\");
        printf("\n");


    }

    return 0;
}
