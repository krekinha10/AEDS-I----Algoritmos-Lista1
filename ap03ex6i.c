#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Prorama para calcular o MMC entre dois numeros (Questao 6 letra i) \n\n");
    int a, b, x, y, r;
    int mmc = 0;
    printf("Digite um numero a = ");
    scanf("%d", &a);
    printf("Digite um numero b = ");
    scanf("%d", &b);
    printf("\n");

    x = a;
    y = b;
    do/*Comando de repetição para o calculo do MMC*/
    {
        r = x % y;
        x = y;
        y = r;
    }
    while (r != 0);

    mmc = (a * b) / x;
    printf("O MMC entre os numeros %d e %d = %d \n", a , b,mmc);


    return 0;
}
