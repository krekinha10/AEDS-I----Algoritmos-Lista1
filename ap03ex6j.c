#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#define MAX 1000000


int main(int argc, char*argv[])
{
    printf("Programa para calcular o N-esimo primo (Questao 6 letra j) \n\n");
    int num1,num2,num;
    int cont = 0;
    int resto1=1;
    printf(" Digite o numero da posicao do numero primo que voce quer saber = ");
    scanf("%d",&num);
    printf("\n");

    for(num1=2; num1<=MAX; num1++)
    {
        resto1=0;

        for(num2=2; num2<=(num1-1); num2++)
        {
            if(num1%num2==0)
            {
                resto1=1;
            }
        }
        if(resto1==0)
        {
            cont++;
        }

        if(cont==num)
        {
            printf("o numero primo na posicao %d = %d",num,num1);
            printf("\n");
            break;

        }
    }
       return 0;
}
