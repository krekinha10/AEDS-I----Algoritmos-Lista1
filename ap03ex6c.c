#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    /* Programa para calcular o MDC usando laços de repetição*/
    printf("Programa para calcular o MDC entre 4 numeros inteiros  (Questao 6 letra c ) \n\n");
    int num1, num2, num3, num4, resto1, resto2, resto3;
    printf("Digite quatro numeros: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);


    resto1 = num1%num2;
    while(resto1!=0)//Laço para calcular o MDC entre os primeiros dois inteiros//
    {
        num1 = num2;
        num2 = resto1;
        resto1 = num1%num2;
    }

    resto2 = num3%num2;
    while(resto2!=0)//Laço para calcular o MDC //
    {
        num3 = num2;
        num2 = resto2;
        resto2 = num3%num2;
    }

    resto3 = num4%num2;
    while(resto2!=0)//Laço para calcular o MDC //
    {
        num4 = num2;
        num2 = resto3;
        resto3 = num4%num2;
    }
    printf("O MDC dos quatro numeros = %d\n", num2);

    return 0;


}
