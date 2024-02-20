//Brayan Arturo Rocha Meneses Matricula:371049
//Fecha 14/02/2024 19/02/24
//Algoritmo que lea 4 calificaciones de un alumno, calcular y desplegar el promedio acompañado de la leyenda APROBADO o REPROBADO
//RMBA_ACT2_03_432

#include <stdio.h>
int main()
{
    int cal1, cal2, cal3, cal4;
    float promedio;

    printf("Ingrese la calificacion numero 1: \n");
    scanf("%d", &cal1);
    printf("Ingrese la calificacion numero 2: \n");
    scanf("%d", &cal2);
    printf("Ingrese la calificacion numero 3: \n");
    scanf("%d", &cal3);
    printf("Ingrese la calificacion numero 4: \n");
    scanf("%d", &cal4);

    promedio = (cal1 + cal2 + cal3 +cal4) / 4;
    
    printf("El promedio es de: %.2f\n", promedio);

    if (promedio > 60 && promedio <= 100) {
        printf("APROBADO");
    } else if (promedio < 60) {
         printf("REPROBADO");
    }

    return 0;
}