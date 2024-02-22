//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Algoritmo que lea 3 números y desplegar los 3 números en orden ascendente
//RMBA_ACT3_03 432

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
    // Declarar variables
    int num1, num2, num3;

    // Leer tres números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    // Ordenar los números
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;

        // Verificar nuevamente con num1 y num2
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }

    // Mostrar los números en orden ascendente
    printf("Los números en orden ascendente son: %d, %d, %d\n", num1, num2, num3);

    return 0;
}