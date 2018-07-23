#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular o valor final de uma conta com deposito inicial de R$ 500,00 e juros de 0.01 ao mes, usando uma so variavel\n\n");
    float d;
    d = 500; // depósito inicial
    // após o primeiro mês
    d += 0.01*d;
    // após o segundo mês
    d += 0.01*d;
    // após o terceiro mês
    d += 0.01*d;
    printf("Valor da conta = %.2f", d);
    printf("\n\n");
    system ("pause");
    return 0;
}
