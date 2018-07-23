#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para criacao e impressao de um vetor de 7 posicoes \n\n");
    int i;
    float vetorFloat[7];
    for (i = 0; i < 7; i++)
    {
        printf("Posicao %d: ", i+1);
        scanf("%f", &vetorFloat[i]);
    }
     for (i = 0; i < 7; i++)
    {
        printf("o valor digitado para a posicao %d e %.2f \n", i+1, vetorFloat[i]);
    }
    return 0;
}
