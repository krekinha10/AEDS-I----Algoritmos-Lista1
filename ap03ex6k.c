#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char*argv[])
{
    printf("Programa para imprimir um relogio adinatado em 1 segundo em relacao ao horario digitado (Questao 6 letra K) \n\n");
    int hora, minutos, segundos;
    int fim= 1;

    while( fim !=0 )
    {
        printf("Digite um numero inteiro para as horas = ");
        scanf("%d", &hora);
        if(hora>=0 && hora<= 23)
        {
            fim = 0;
        }
        else
        {
            printf("O numero digitado e invalido\n");
        }
    }
    fim =1 ;
    while( fim != 0 )
    {
        printf("Digite um numero inteiro para os minutos = ");
        scanf("%d", &minutos);
        if(minutos>=0 && minutos<=59)
        {
            fim =0;
        }
        else
        {
            printf("O numero digitado e invalido\n");
        }
    }
   fim=1;
    while( fim != 0 )
    {
        printf("Digite um numero inteiro para os segundos = ");
        scanf("%d", &segundos);
        if(segundos>=0 && segundos<=59)
        {
            fim =0;
        }
        else
        {
            printf("O numero digitado e invalido\n");
        }
    }
    printf("\n");

    segundos++;
    if(segundos == 60)
    {
        segundos = 0;
        minutos++;
        if(minutos == 60)
        {
            minutos = 0;
            hora++;
            if(hora == 24)
            {
                hora = 0;
            }
        }
    }

    printf("Sao %.2d:%.2d:%.2d \n", hora, minutos,segundos);



    return 0;
}
