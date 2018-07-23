#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    printf("Programa para calcular o IMC de um individuo \n\n");
    double PESO, ALTURA, IMC;
    printf("Digite o peso do individuo = ");
    scanf("%lf", &PESO);
    printf("Digite a altura do individuo = ");
    scanf("%lf", &ALTURA);

    IMC = (PESO)/(pow(ALTURA,2));

    if(IMC<=17)//Condições para avaliar a situação do individuo//
    {
        printf("O IMC do individuo e = %f\n", IMC);
        printf("Muito abaixo do peso\n");
    }
    else
    {
        if((IMC> 17) && (IMC<= 18.49))
        {
            printf("O IMC do individuo e = %f\n", IMC);
            printf("Abaixo do peso\n");
        }
        else
        {
            if((IMC>=18.5) && (IMC<= 24.99))
            {
                printf("O IMC do individuo e = %f\n", IMC);
                printf("Peso normal\n");
            }
            else
            {
                if((IMC>=25) && (IMC<= 29.99))
                {
                    printf("O IMC do individuo e = %f\n", IMC);
                    printf("Acima do peso\n");
                }
                else
                {
                    if((IMC>=30) && (IMC<= 34.99))
                    {
                        printf("O IMC do individuo e = %f\n", IMC);
                        printf("Obesidade I\n");
                    }
                    else
                    {
                        if((IMC>=35) && (IMC<= 39.99))
                        {
                            printf("O IMC do individuo e = %f\n", IMC);
                            printf("Obesidade II (severa)\n");
                        }
                        else
                        {
                            if((IMC>=40))
                            {
                                printf("O IMC do individuo e = %f\n", IMC);
                                printf("Obesidade III (morbida)\n");
                            }

                        }
                    }
                }
            }
        }
    }

    return 0;
}
