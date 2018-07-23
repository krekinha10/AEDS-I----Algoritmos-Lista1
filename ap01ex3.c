#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular a area de um triangulo \n\n");
    double a, b, c, s, area;
    printf("Digite o cateto A: ");
    scanf("%lf",&a);

    printf("Digite o cateto B: ");
    scanf("%lf",&b);

    printf("Digite a Hipotenusa C: ");
    scanf("%lf",&c);
    printf("\n");

    printf("Os catetos digitados foram A = %.2f e B = %.2f \n", a, b);

    printf("A Hipotenusa digitada foi C = %.2f \n",c);
    printf("\n");

    s=(a+b+c)/2;

    if((s*(s-a)*(s-b)*(s-c)) >= 0)// Esse passo diz que só será realizado o cálculo se a raiz for de um numero inteiro positivo ou zero//
    {
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("A area calculada e = %.2f \n", area);
    }

    else
    {
        printf("Os valores digitados nao estao corretos");
    }

    return 0;

}
