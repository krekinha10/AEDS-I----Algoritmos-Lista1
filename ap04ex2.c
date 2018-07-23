#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

int main(int argc, char*argv[])
{
    printf("Programa para montagem e prenchimento de um vetor e impressao em ordem drecrescente os valores dos mesmos \n\n ");
    int i,N;
    int fim=1;
	float vetorFloat[MAX];
    while(fim!=0)
    {
        printf("Digite o tamanho do Vetor desejado = ");
        scanf("%d", &N);
        printf("\n");
        vetorFloat[N]=0;
        if (N<= MAX)
        {

            for (i = 0; i < N; i++)
            {
                printf("Posicao %d: ", i+1);
                scanf("%f", &vetorFloat[i]);

            }
            printf("\n");
            for (i = N-1; i >=0; i--)
            {
                printf("o valor digitado para a posicao %d e %.2f \n", i+1, vetorFloat[i]);
            }
            fim=0;
        }
        else
        {
            printf(" O valor digitado e invalido \n");

        }

    }



    return 0;
}
