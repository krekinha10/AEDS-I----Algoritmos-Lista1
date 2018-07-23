#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])

{
    printf("Progama para calcular as raizes de uma equacao do 2 grau como a*x^2+b*x+c=0 \n\n");
    float a, b, c, r1, r2;
    printf("digite o valor de a = ");
    scanf("%f", &a);
    printf("digite o valor de b = ");
    scanf("%f", &b);
    printf("digite o valor de c = ");
    scanf("%f", &c);
    printf("\n");
    if(b*b >= 4*a*c)//assegura que o delta é maior ou igual a zero assim as raizes são reais //
    {
        r1 = (-b + sqrt (b*b - 4*a*c))/(2*a);
        r2 = (-b - sqrt (b*b - 4*a*c))/(2*a);

        printf("As raizes sao r1 = %.2f e r2 = %.2f \n", r1, r2);

    }
    else
    {
        printf("As raizes  sao numeros complexos");

    }
    return 0;
}


