//Brayan Arturo Rocha Meneses Matricula:371049
//Fecha 14/02/2024 19/02/24
//Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar: ANIDADO POR FALSO
//RMBA_ACT2_06_432

#include <stdio.h>
int main ()
{
    int cal1, cal2, cal3;
    float promedio;

    printf("Ingrese la calificacion numero 1: \n");
    scanf("%d", &cal1);
    printf("Ingrese la calificacion numero 2: \n");
    scanf("%d", &cal2);
    printf("Ingrese la calificacion numero 3: \n");
    scanf("%d", &cal3);

    promedio = (cal1 + cal2 + cal3) / 3;

    printf("El promedio es de: %.2f\n", promedio);

    if (promedio < 30) {
        printf("Repetir\n");
    } else {
        if (promedio >= 30 && promedio < 60) {
            printf("Extraordinario\n");
        } else {
            if (promedio >= 60 && promedio < 70) {
                printf("Suficiente\n");
            } else {
                if (promedio >= 70 && promedio < 80) {
                    printf("Regular\n");
                } else {
                    if (promedio >= 80 && promedio < 90) {
                        printf("Bien\n");
                    } else {
                        if (promedio >= 90 && promedio < 98) {
                            printf("Muy bien\n");
                        } else {
                            if (promedio >= 98 && promedio <= 100) {
                                printf("Excelente\n");
                            } else {
                                printf("Error en promedio\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}