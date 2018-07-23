#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char*argv[])
{
    printf("Programa para verificar se um numero e primo, se primo esse me retorna 1 e se nao 0  (Questao 6 letra e) \n\n");
    int N, resto1;
    int A=0;
    int P = 0;
    printf("Digite um numero N = ");
    scanf("%d", &N);
    printf("\n");
    resto1=N%N;


    for(P=1; P<=N; P++)
    {
        if(N%P==0)
            A++;
    }

    if ((resto1==0)&&(A==2)&&(N>=2))
    {
        printf("1");
        printf("\n");
    }
    else
    {
        printf("0");
    }


    return 0;
}
