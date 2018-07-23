#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char*argv[])
{
    /* O programa foi construido utilizando-se estruturas de repetição aninhadas para avaliar todos as condições impostas*/

    printf("Programa para calcular o RSG de um aluno \n\n");
    double nota1, nota2, nota3, nota4, cred1, cred2, cred3, cred4, RSG;
    int fim =1;
    while (fim !=0 )// Condição que impõe que o usúario digite uma nota dentro do intervalo definido//
    {
        printf("Digite o valor da nota 1= ");
        scanf("%lf", &nota1);
        if((nota1>=0)&&(nota1<=100))
        {
            if((nota1>=0)&&(nota1<=39))
            {
                nota1 = 0;
                printf("O conceito na materia 1 e F = %.1f\n", nota1);

            }
            else
            {
                if((nota1>=40)&&(nota1<=59))
                {
                    nota1 = 1;
                    printf("O conceito na materia 1 e E = %.1f\n", nota1);

                }
                else
                {
                    if((nota1>=60)&&(nota1<=69))
                    {
                        nota1 = 2;
                        printf("O conceito na materia 1 e D = %.1f\n", nota1);

                    }
                    else
                    {
                        if((nota1>=70)&&(nota1<=79))
                        {
                            nota1 = 3;
                            printf("O conceito na materia 1 e C = %.1f\n", nota1);

                        }
                        else
                        {
                            if((nota1>=80)&&(nota1<=89))
                            {
                                nota1 = 4;
                                printf("O conceito na materia 1 e B = %.1f\n", nota1);

                            }
                            else
                            {
                                if((nota1>=90)&&(nota1<=100))
                                {
                                    nota1 = 5;
                                    printf("O conceito na materia 1 e A= %.1f\n", nota1);

                                }
                            }
                        }
                    }
                }
            }
            fim = 0;
        }
        else
        {
            printf("O valor digitado nao e valido \n");

        }
    }
    printf("\n");
    fim = 1;
    while (fim !=0 )// Condição que impõe que o usúario digite uma nota dentro do intervalo definido//
    {

        printf("Digite o valor da nota 2= ");
        scanf("%lf", &nota2);
        if((nota2>=0)&&(nota2<=100))
        {
            if((nota2>=0)&&(nota2<=39))
            {
                nota2 = 0;
                printf("O conceito na materia 2 e F = %.1f\n", nota2);

            }
            else
            {
                if((nota2>=40)&&(nota2<=59))
                {
                    nota2 = 1;
                    printf("O conceito na materia 2 e E = %.1f\n", nota2);

                }
                else
                {
                    if((nota2>=60)&&(nota2<=69))
                    {
                        nota2 = 2;
                        printf("O conceito na materia 2 e D = %.1f\n", nota2);

                    }
                    else
                    {
                        if((nota2>=70)&&(nota2<=79))
                        {
                            nota2 = 3;
                            printf("O conceito na materia 2 e C = %.1f\n", nota2);

                        }
                        else
                        {
                            if((nota2>=80)&&(nota2<=89))
                            {
                                nota2 = 4;
                                printf("O conceito na materia 2 e B = %.1f\n", nota2);

                            }
                            else
                            {
                                if((nota2>=90)&&(nota2<=100))
                                {
                                    nota2 = 5;
                                    printf("O conceito na materia 2 e A= %.1f\n", nota2);

                                }
                            }
                        }
                    }
                }
            }
            fim = 0;
        }
        else
        {
            printf("O valor digitado nao e valido \n");

        }
    }
    printf("\n");
    fim = 1;
    while (fim !=0 )// Condição que impõe que o usúario digite uma nota dentro do intervalo definido//
    {

        printf("Digite o valor da nota 3= ");
        scanf("%lf", &nota3);
        if((nota3>=0)&&(nota3<=100))
        {
            if((nota3>=0)&&(nota3<=39))
            {
                nota3 = 0;
                printf("O conceito na materia 3 e F = %.1f\n", nota3);

            }
            else
            {
                if((nota3>=40)&&(nota3<=59))
                {
                    nota3 = 1;
                    printf("O conceito na materia 3 e E = %.1f\n", nota3);

                }
                else
                {
                    if((nota3>=60)&&(nota3<=69))
                    {
                        nota3 = 2;
                        printf("O conceito na materia 3 e D = %.1f\n", nota3);

                    }
                    else
                    {
                        if((nota3>=70)&&(nota3<=79))
                        {
                            nota3 = 3;
                            printf("O conceito na materia 3 e C = %.1f\n", nota3);

                        }
                        else
                        {
                            if((nota3>=80)&&(nota3<=89))
                            {
                                nota3 = 4;
                                printf("O conceito na materia 3 e B = %.1f\n", nota3);

                            }
                            else
                            {
                                if((nota3>=90)&&(nota3<=100))
                                {
                                    nota3 = 5;
                                    printf("O conceito na materia 3 e A= %.1f\n", nota3);

                                }
                            }
                        }
                    }
                }
            }
            fim = 0;
        }
        else
        {
            printf("O valor digitado nao e valido \n");

        }
    }
    printf("\n");
    fim = 1;
    while (fim !=0 )// Condição que impõe que o usúario digite uma nota dentro do intervalo definido//
    {

        printf("Digite o valor da nota 4= ");
        scanf("%lf", &nota4);
        if((nota4>=0)&&(nota4<=100))
        {
            if((nota4>=0)&&(nota4<=39))
            {
                nota4 = 0;
                printf("O conceito na materia 4 e F = %.1f\n", nota4);

            }
            else
            {
                if((nota4>=40)&&(nota4<=59))
                {
                    nota4 = 1;
                    printf("O conceito na materia 4 e E = %.1f\n", nota4);

                }
                else
                {
                    if((nota4>=60)&&(nota4<=69))
                    {
                        nota4 = 2;
                        printf("O conceito na materia 4 e D = %.1f\n", nota4);

                    }
                    else
                    {
                        if((nota4>=70)&&(nota4<=79))
                        {
                            nota4 = 3;
                            printf("O conceito na materia 4 e C = %.1f\n", nota4);

                        }
                        else
                        {
                            if((nota4>=80)&&(nota4<=89))
                            {
                                nota4 = 4;
                                printf("O conceito na materia 4 e B = %.1f\n", nota4);

                            }
                            else
                            {
                                if((nota4>=90)&&(nota4<=100))
                                {
                                    nota4 = 5;
                                    printf("O conceito na materia 4 e A= %.1f\n", nota4);

                                }
                            }
                        }
                    }
                }
            }
            fim = 0;
        }
        else
        {
            printf("O valor digitado nao e valido \n");

        }
    }
    printf("\n");
    fim = 1;
    while (fim !=0)// Condição que impõe que o usúario digite uma nota dentro do intervalo definido//
    {
        printf("Digite o numero de creditos da materia 1= ");
        scanf("%lf", &cred1);
        if((cred1>=20)&&(cred1<=60))
        {
            fim = 0;
        }

        else
        {
            fim = 1;
            printf("O valor digitado e invalido\n");
        }
    }
    fim=1;

    while (fim !=0)
    {
        printf("Digite o numero de creditos da materia 2= ");
        scanf("%lf", &cred2);
        if((cred2>=20)&&(cred2<=60))
        {
            fim = 0;
        }

        else
        {
            fim = 1;
            printf("O valor digitado e invalido\n");
        }
    }
    fim=1;

    while (fim !=0)
    {
        printf("Digite o numero de creditos da materia 3= ");
        scanf("%lf", &cred3);
        if((cred3>=20)&&(cred3<=60))
        {
            fim = 0;
        }

        else
        {
            fim = 1;
            printf("O valor digitado e invalido\n");
        }
    }
    fim=1;

    while (fim !=0)// Condição que impõe que o usúario digite uma nota dentro do intervalo definido//
    {
        printf("Digite o numero de creditos da materia 4= ");
        scanf("%lf", &cred4);
        if((cred4>=20)&&(cred4<=60))
        {
            fim = 0;
        }

        else
        {
            fim = 1;
            printf("O valor digitado e invalido\n");
        }
    }
    printf("\n");

    RSG =((cred1*nota1+cred2*nota2+cred3*nota3+cred4*nota4)/(cred1+cred2+cred3+cred4));
    printf("O RSG do Aluno e = %.2f", RSG);

    return 0;
}
