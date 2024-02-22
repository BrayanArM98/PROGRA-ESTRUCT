//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Programa en C que sirva para calcular el salario semanal de un trabajador donde se obtiene como dato de entrada las horas semanales trabajadas, el salario por hora.
//RMBA_ACT4_04_432


#include <stdio.h>

int main ()
{
    // j_n = jornada normal, h_t = horas trabajadas, s_h = salario por hora
    // s_n = salario normal, s_e = salario extra, s_t = salario total

    float j_n = 40, h_t, s_h, s_n, s_e, s_t;

    printf("Ingresa el total de horas trabajadas: \n");
    scanf("%f", &h_t);
    printf("Ingresa el salario por hora: \n");
    scanf("%f", &s_h);

    if (h_t > j_n)
    {
        if(h_t > (j_n + 9))
        {
            s_e = (9 * s_h * 2) + ((h_t - (j_n + 9)) * s_h * 3);
            s_n = j_n * s_h;
        }
        else
        {
            s_e = (h_t - j_n) * (s_h * 2);
            s_n = j_n * s_h;
        }
    }
    else
    {
        s_n = h_t * s_h;
        s_e = 0;
    }

    s_t = s_n + s_e;

    printf("Salario por Hora: $%.2f\n", h_t);
    printf("Horas trabajadas: %.0f\n", h_t);
    printf("Salario Normal: $%.2f\n", s_n);
    printf("Salario Extra: $%.2f\n", s_e);
    printf("Salario Total: $%.2f\n", s_t);

    return 0;
}