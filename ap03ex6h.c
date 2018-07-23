#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para somar os digitos de um numero qualquer (Questao 6 letra h) \n\n");
    int num;
    int soma = 0;
    printf("Digite um numero = ");
    scanf("%d",&num);
    printf("\n");


    while(num>0)
    {
        soma=soma + num%10;
        num/=10;
    }

    printf("A soma dos digitos do numero e %d\n",soma);

    return 0;
}
