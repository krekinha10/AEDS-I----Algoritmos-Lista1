#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

/*
Programa para Calculor o seno de 30°
*/


int main(int argc, char*argv[])
{
     printf("Programa para calculo do seno de 30\n");
    double graus, resultado;
    graus= 30.0;
    printf("\n");
    resultado = sin(graus*PI /180);
    printf("O valor do seno de 30 = %.2f", resultado);
    printf("\n");
    return 0;
}
