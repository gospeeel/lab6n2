#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>


//Вариант 14

void main()
{
    setlocale(LC_ALL, "RUS");

    double x, F1, F2, F3, F;

    printf("Введите значение x:");
    scanf("%lf", &x);
    printf("x = %lf\n", x);

    if (x < 13)
    {
        F1 = pow(-x, 3) + 9;
    }
    else
    {
        if (x > 13)
        {
            F2 = -3 / x + 1;
        }
        else
        {
            F3 = log(x);
        }
    }

    printf("F(x) = %lf\n", F = (x < 13) ? F1 : (x > 13) ? F2 : F3);
}