#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    /* O programa usa um comando de repetção for para o calculo do fatorial de um inteiro N*/
    printf("Programa para calcular o fatorial de um numero inteiro qualquer (questao 6 letra a) \n \n");
    int numero,i;
    int fat=1;
    printf("Digite um numero = ");
    scanf("%d", &numero);
    printf("\n");
    printf("O numero digitado foi %d \n\n", numero);
    for(i=1; i<= numero; i++)
    {
        fat*=i;

    }
    printf("O fatorial do numero %d e igual a %d \n", numero,fat);

    return 0;
}
