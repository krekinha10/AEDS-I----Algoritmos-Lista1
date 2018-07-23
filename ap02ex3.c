#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para dizer se um ano e bissexto ou nao \n\n");
    int ano, resto1, resto2, resto3;
    printf("Digite o ano a ser analisado = ");
    scanf("%i", &ano);
    resto1 = ano%100;
    resto2 = ano%4;
    resto3 = ano%400;
    if (((resto1!=0) && (resto2==0))||(resto3==0))//Condições para que o ano seja Bissexto//
    {
        printf("O ano %d e Bissexto\n", ano);
    }
    else
    {
        printf("O ano %d nao e Bissexto\n", ano);
    }
    system("pause");

    return 0;
}
