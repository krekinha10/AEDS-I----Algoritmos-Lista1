#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para calcular o salario de um trabalhador com base em entradas fornecidas pelo usuario \n\n");
    double alimentacao, transporte, metro2,valor_metro2, salario;
    printf("Digite o valor do Vale Alimentacao = ");
    scanf("%lf", &alimentacao);
    printf(" O valor do Vale Alimentacao e R$ %.2f \n\n", alimentacao);
    printf("Digite o valor do Vale transporte = ");
    scanf("%lf", &transporte);
    printf(" O valor do Vale transporte e R$ %.2f \n\n", transporte);
    printf("Digite quantos metros quadrados foram trabalhados = ");
    scanf("%lf", &metro2);
    printf(" Os metros quadrados foram %.2f m2 \n", metro2);

    if(metro2<10)//laço para determinar o valor do metro do pedreiro em questão//
    {
        valor_metro2= 10;
    }
    else
    {
        if(metro2>=10 && metro2<20)
        {
            valor_metro2=11.5;
        }
        else
        {
            if(metro2>=20)
            {
                valor_metro2= 13;
            }
        }
    }
    printf("O valor por metro quadrado e R$ %.2f", valor_metro2);
    printf("\n\n");
    salario= alimentacao+2*transporte+metro2*valor_metro2;/* Calculo do salario do pedreiro */
    printf("O pedreiro deve receber R$ %.2f \n", salario);

    return 0;
}
