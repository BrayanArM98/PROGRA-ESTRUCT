//Brayan Arturo Rocha Meneses Matricula:371049
//Fecha 14/02/2024 19/02/24
//Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER ) preguntar al usuario cual es su SEXO y desplegar la leyenda “HOLA, ERES HOMBRE ”, “ HOLA, ERES MUJER”
//RMBA_ACT2_04_432

#include <stdio.h>
int main ()
{
    int opcion;

    printf("¿Que sexo eres?\n");
    printf("1.Hombre\n");
    printf("2.Mujer\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("HOLA, ERES HOMBRE\n");
    } else if (opcion == 2) {
        printf("HOLA, ERES MUJER\n");
    }

    return 0;
}
