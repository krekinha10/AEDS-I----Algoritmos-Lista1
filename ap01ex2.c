#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular o valor final de uma conta com deposito inicial de R$ 500,00 e juros de 0.01 ao mes, usando uma so variavel\n\n");
    float d;
    d = 500; // dep�sito inicial
    // ap�s o primeiro m�s
    d += 0.01*d;
    // ap�s o segundo m�s
    d += 0.01*d;
    // ap�s o terceiro m�s
    d += 0.01*d;
    printf("Valor da conta = %.2f", d);
    printf("\n\n");
    system ("pause");
    return 0;
}
