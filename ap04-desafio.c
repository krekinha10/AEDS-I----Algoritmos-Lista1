#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100000

int main(int argc, char*argv[])

{
    /*Estruturas de repeticao para a determinacao e numeros menores que N e soma dos divisores destes numeros*/
    printf("Programa para encontrar o numeros amigos \n\n");
    int n, i, j;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int count=0;
    int menores[MAX];
    int somadosdivisores[MAX];
    printf("Digite um numero inteiro N = ");
    scanf("%d", &n);

    for(j=1; j<n ; j++)
    {

        printf("Os inteiro menores que %d sao %d \n", n,j);
        count++;
    }

    printf("\n");
    menores[count]=0;

    for(i=1; i<=count; i++)
    {
        menores [i]=i;

    }
    for(i=1; i<=count; i++)
    {
        printf("os inteiros menores que %d (%d)= %d ", n,i, menores[i]);
        printf("\n");
    }
    printf("\n");


    for(i=1; i<=count; i++)
    {
        b= menores[i];
        for(j=1; j<n ; j++)
        {
            c = b%j;
            if(c==0)
            {
                somadosdivisores[i]+=j;

            }
        }

    }

    for(i=1; i<=count; i++)
    {
        printf("o componente do vetor soma dos divisores dos numeros inteiros menores que (%d)= %d ", i,somadosdivisores[i]);
        printf("\n");
    }

    printf("\n");


    for(i=2; i<=count; i++)
    {
        d=somadosdivisores[i];

        for(j=2; j<=count; j++)
        {
            e=menores[j];
            if(d==e)
            {
                printf("o inteiro %d e amigo do inteiro %d \n", menores[i], menores[j]);
            }

        }

    }

    return 0;

}
