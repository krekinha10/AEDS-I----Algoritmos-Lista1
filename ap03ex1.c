#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char*argv[])
{
    printf("Programa para calcular o MDC de tres numeros \n\n");
    int num1, num2, num3, resto1, resto2;
    printf("Digite tres numeros= ");
    scanf("%d %d %8d", &num1, &num2, &num3);


    resto1 = num1%num2;// Calcúlo do MDC para os dois primeiros numeros//
    while(resto1!=0)
    {
        num1 = num2;
        num2 = resto1;
        resto1 = num1%num2;
    }
    printf("O MDC entre os dois primeiros numeros e = %d\n", num2);

    resto2 = num3%num2;// usa o MDC dos primeiros numeros para calcular o MDC dos três numeros//
    while(resto2!=0)
    {
        num3 = num2;
        num2 = resto2;
        resto2 = num3%num2;
    }
    printf("O MDC entre os tres numeros e = %d\n", num2);

    return 0;


}
