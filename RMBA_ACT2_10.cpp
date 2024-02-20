//Brayan Arturo Rocha Meneses Matricula:371049
//Fecha 14/02/2024 19/02/24
//Programa que sirva para calcular el salario semanal de un trabajador
//RMBA_ACT2_10_432

#include <stdio.h>
 int main()
 {
    float salario_hora, horas_trabajadas, salario_extra, salario_normal, salario_total, salario_extra_triple;

    printf("Ingrese el salario por hora: \n");
    scanf("%f", &salario_hora);
    printf("Ingrese las horas trabajadas: \n");
    scanf("%f", &horas_trabajadas);

    if(horas_trabajadas <= 40){
        salario_normal = horas_trabajadas * salario_hora;
        salario_total = salario_normal;
    } else if (horas_trabajadas > 40 && horas_trabajadas <= 49){
        salario_normal = 40 * salario_hora;
        salario_extra = (horas_trabajadas - 40) * (salario_hora * 2);
        salario_total = salario_normal + salario_extra;
    } else if (horas_trabajadas > 49){
        salario_normal = 40 * salario_hora;
        salario_extra_triple = (horas_trabajadas - 49);
        salario_extra = (horas_trabajadas - 40 - salario_extra_triple) * (salario_hora * 2) + (salario_extra_triple * (salario_hora * 3));
        salario_total = salario_normal + salario_extra;
    } else {
        printf("Error en el calculo\n");
    }

    printf("Salario por hora: $%.2f\n",salario_hora);
    printf("Horas trabajadas: %.0f\n",horas_trabajadas);
    printf("Salario normal de: $%.2f\n",salario_normal);
    printf("Salario extra de: $%.2f\n",salario_extra);
    printf("Salario total de: $%.2f\n",salario_total);

    return 0;
 }
 