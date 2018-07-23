#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char*argv[])
{
    printf("Programa para calcular se um numero e Primo ou nao \n\n");
    int N, resto1;
    int A = 0;
    int P = 0;
    printf("Digite um numero N = ");
    scanf("%d", &N);
    printf("\n");
    resto1=N%N;


    for(P=1; P<=N; P++)// Laço para calcular os divisores de um numero//
    {
        if(N%P==0)
        {
            A++;
        }

    }

    if ((resto1==0)&&(A==2)&&(N>=2))/* Condição para avaliar se o numero é primo */
    {
        printf("O numero N = %d e primo \n",N);
    }
    else
    {
        printf("O numero N = %d nao e primo \n",N);
    }

    return 0;
}
