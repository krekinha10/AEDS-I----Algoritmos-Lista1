#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 12


int main(int argc, char*argv[])
{
    printf("Programa para criacao e preenchimento de uma matriz e soma de matrizes \n\n");
    int i, j, M, N;
    int fim=1;
    float matrizA[MAX][MAX];
    float matrizB[MAX][MAX];
    float matrizC[MAX][MAX];

    while(fim!=0)
    {
        printf("Digite o numero de linhas desejado = ");
        scanf("%d", &M);
        printf("\n");
        if(M<= MAX)
        {
            fim=0;
        }
        else
        {
            printf("O valor digitado e invalido \n");
        }
    }
    fim=1;
    while(fim!=0)
    {
        printf("Digite o numero de linhas desejado = ");
        scanf("%d", &N);
        printf("\n");
        if(N<= MAX)
        {
            fim=0;
        }
        else
        {
            printf("O valor digitado e invalido \n");
        }
    }
    matrizA[M][N]=0;


    for (i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("Posicao %d %d: ", i+1, j+1);
            scanf("%f", &matrizA[i][j]);

        }

    }




    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf ("%.2f ", matrizA[i][j]);

        }
        printf ("\n");
    }


    matrizB[M][N]=0;
    printf("A matriz B e \n\n");

    for (i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)

        {
            printf("Posicao %d %d: ", i+1, j+1);
            scanf("%f", &matrizB[i][j]);

        }

    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf ("%.2f ", matrizB[i][j]);

        }
        printf ("\n");
    }

    for (i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)

        {
            matrizC[i][j]= matrizA[i][j] + matrizB[i][j];

        }

    }

    printf("A matriz C resultado e \n\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf ("%.2f ", matrizC[i][j]);

        }
        printf ("\n");
    }


    return 0;
}

