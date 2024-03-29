//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Programa en C que sirva para el juego del CHINCHAMPU (ANIDADA)
//RMBA_ACT4_08_432

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int opcion_jugador, opcion_computadora;
    srand(time(NULL));

    printf("Elije una opcion:\n");
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijera\n");
    scanf("%d", &opcion_jugador);

    opcion_computadora = rand() % 3 + 1;

    printf("La computadora eligio: ");
    if (opcion_computadora == 1) 
    {
        printf("Piedra\n");
    } 
    else 
    {
        if (opcion_computadora == 2) 
        {
        printf("Papel\n");
        } 
        else 
        {
        printf("Tijera\n");
        }
    }
    
    printf("Resultado: ");

    if (opcion_jugador == opcion_computadora) 
    {
        printf("Empate\n");
    } 
    else 
    {
        if ((opcion_jugador == 1 && opcion_computadora == 3) ||
               (opcion_jugador == 2 && opcion_computadora == 1) ||
               (opcion_jugador == 3 && opcion_computadora == 2)) 
        {
        printf("Ganaste\n");
        } 
        else 
        {
        printf("La computadora gano\n");
        }
    }

    return 0;
}
