//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Programa en C que sirva para desplegar el Total de una llamada telefónica donde se pide como datos de entrada los minutos y el tipo de llamada, se cobra de la siguiente manera
//RMBA_ACT4_05_432


#include <stdio.h>

int main ()
{
    int opcion;
    float minutos, subtotal, iva, total;

    printf("Ingrese los minutos que duro su llamada: \n");
    scanf("%f", &minutos);
    printf("Seleccione que tipo de llamada fue:");
    printf("1. Local\n");
    printf("2. Nacional\n");
    printf("3. Internacional\n");
    scanf("%d", &opcion);

    if (opcion == 1) 
    {
        subtotal = 3.00;
    } 

    if (opcion == 2) 
    {
        if (minutos <= 3) 
        {
            subtotal = 7.00;
        } 
        else 
        {
            subtotal = 7.00 + (minutos - 3) * 2.00;
        }
    } 

    if (opcion == 3) 
    {
        if (minutos <= 2) 
        {
            subtotal = 9.00;
        } else 
        {
            subtotal = 9.00 + (minutos - 2) * 4.00;
        }
    } 

    iva = subtotal * 0.16;
    total = subtotal + iva;

    printf("Subtotal: $%.2f\n", subtotal);
    printf("IVA (16%%): $%.2f\n", iva);
    printf("Total: $%.2f\n", total);

    return 0;
}
