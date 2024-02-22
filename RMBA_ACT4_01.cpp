//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Programa en C que use un menú para realizar las 4 operaciones básicas, donde el usuario introduce 2 números enteros y realizará la operación según sea su selección del menú
//RMBA_ACT4_01_432


#include <stdio.h>

int main ()
{
    int opcion;
    float num1, num2;
    float suma, resta, multiplicacion, division;

    printf("Bienvenido a la Calculadora\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Seleccione una opcion entre (1/2/3/4)\n");
    scanf("%d", &opcion);

    printf("Introduce el primer numero: \n");
    scanf("%f", &num1);
    printf("Introduce el segundo numero: \n");
    scanf("%f", &num2);

    if (opcion == 1)
    {
        suma = num1 + num2;
        printf("El resultado de la suma es: %.2f", suma);
    }
    else
    {
        if (opcion == 2)
        {
            resta = num1 - num2;
            printf("El resultado de la resta es: %.2f", resta);
        }
        else
        {
            if (opcion == 3)
            {
                multiplicacion = num1 * num2;
                printf("El resultado de la multiplicacion es: %.2f", multiplicacion);
            }
            else
            {
                if (opcion == 4)
                {
                    if (num2 != 0)
                    {
                        division = num1 / num2;
                        printf("El resultado de la division es: %.2f", division);
                    }
                    else
                    {
                        printf("Error: No se puede dividir por cero.\n");
                    }
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
    }

    return 0;
}