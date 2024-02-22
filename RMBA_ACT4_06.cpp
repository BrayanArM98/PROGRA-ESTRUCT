//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Programa en C que sirva para calcular el Total a pagar por consumo de agua, donde el dato de entrada son los M3 de agua consumidos, Tomar en cuenta que se cobra escalonada de la Siguiente manera:
//RMBA_ACT4_06_432


#include <stdio.h>

int main() {
    float m3_consumidos;
    float subtotal, iva, total;

    printf("Ingrese la cantidad de M3 de agua consumidos: ");
    scanf("%f", &m3_consumidos);

    if (m3_consumidos <= 4) 
    {
        subtotal = 50.0;
    } 
    else 
    {
        if (m3_consumidos <= 15) 
        {
            subtotal = 50.0 + (m3_consumidos - 4) * 8.0;
        } 
        else 
        {
            if (m3_consumidos <= 50) 
            {
                subtotal = 50.0 + 11.0 * 11.0 + (m3_consumidos - 15) * 10.0;
            }
            else 
            {
                subtotal = 50.0 + 11.0 * 11.0 + 35.0 * 10.0 + (m3_consumidos - 50) * 11.0;
            }
        }
    }

    iva = 0.16 * subtotal;
    total = subtotal + iva;

    printf("Subtotal: $%.2f\n", subtotal);
    printf("IVA (16%%): $%.2f\n", iva);
    printf("Total a pagar: $%.2f\n", total);

    return 0;
}
