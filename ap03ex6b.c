#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular o MDC de dois numero qualquer (Questao 6 letra b)\n\n");
    int a,b, resto;
    printf("Digite um numero A = ");
    scanf("%d", &a);
    printf("Digite um numero B = ");
    scanf("%d", &b);
    printf("\n");

    resto = a%b;

    while(resto!=0)//laço para o calcúlo do MDC//
    {
        a = b;
        b = resto;
        resto = a%b;
    }
    printf("MDC = %d\n\n", b);


    return 0;
}
