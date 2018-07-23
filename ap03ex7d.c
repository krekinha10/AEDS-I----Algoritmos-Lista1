#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    /*Programa utilizando estruturas de repetição para a montagem de um tabuleiro de . e #*/
    printf("Programa para imprimir um tabuleiro de . e # (Questao 7 letra d) \n\n ");
    int N, i ,j;
    printf("Digite um valor N = ");
    scanf("%d",&N);
    printf("\n");
    for(j=1; j<=2*N;j++)
    {
        for(i=1;i<= 2*N;i++)
        {
            if((i+j)%2 == 0)
            {
                printf(".");
            }
            else
            {
                printf("#");

            }
        }
        printf("\n");
    }
    return 0;
}
