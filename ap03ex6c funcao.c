#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MDC (int a,int b, int resto)/* Função para calculo do MDC*/
{
resto = a%b;

    while(resto!=0)
    {
        a = b;
        b = resto;
        resto = a%b;
    }
    return b;
}

int main(int argc, char*argv[])
{
    printf("Programa para calcular o MDC entre 4 numeros inteiros usando o conceito de funcao (Questão 6 letra c ) \n\n");
    int num1, num2, num3, num4, resto1, resto2, resto3;
    printf("Digite quatro numeros: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

resto1=MDC(num1, num2,1);
resto2=MDC(num3, num4,1);
resto3=MDC(resto1,resto2,1);

printf("%d",resto3);

    return 0;


}
