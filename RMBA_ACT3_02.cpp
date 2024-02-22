//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
//RMBA_ACT3_02_432

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>

int main()
{
    int a, b, c;
    printf("Ingrese solamente tres números: ");
    scanf("%d %d %d", &a, &b, &c);
   
    int middleNumber;

    if ((a >= b && a <= c) || (a <= b && a >= c))
    {
        middleNumber = a;
    } else
    {
        if ((b >= a && b <= c) || (b <= a && b >= c))
        {
            middleNumber = b;
        } else
        {
            middleNumber = c;
        }
    }

    printf("El número del medio es: %d\n", middleNumber);

    return 0;
}