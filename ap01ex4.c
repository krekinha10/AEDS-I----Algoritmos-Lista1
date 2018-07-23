#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char*argv[])

{
    printf("Programa para calcular e imprimir o maior valor suportado por uma variavel do tipo int \n\n");
    int x,y,z;
    x = 2;
    y = 31;
    z = pow(x,y) - 1;
    printf("O maior valor inteiro e = %d \n", z);
    z += 1;
    printf("O maior valor inteiro acrescido de 1 e = %d \n", z);// Quando se soma 1 ao maior valor suportado por uma variavel do tipo int esse fica negativo
    return 0;
}
