//Brayan Arturo Rocha Meneses Matricula:371049
//Fecha 14/02/2024 19/02/24
//Algoritmo que lea un número entero, y desplegar si el número es “PAR” o “IMPAR”
//RMBA_ACT2_02_432

#include <stdio.h>
int main ()
{
    int num;

    printf("Ingrese un numero: \n");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("%d es un numero PAR\n", num);
    } else {
        printf("%d es un numero IMPAR\n", num);
    }

    return 0;
}