//Brayan Arturo Rocha Menses Matricula:371049
//Fecha 21/02/2024 23/02/2024
//Programa en C que sirva para el juego del CHINCHAMPU (MULTIPLE)
//RMBA_ACT4_09_432

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
    switch (opcion_computadora) {
        case 1:
            printf("Piedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tijera\n");
            break;
        default:
            printf("Opcion invalida\n");
            return 1;
    }

    printf("Resultado: ");
    switch (opcion_jugador) {
        case 1:
            switch (opcion_computadora) {
                case 1:
                    printf("Empate\n");
                    break;
                case 2:
                    printf("La computadora gano\n");
                    break;
                case 3:
                    printf("Ganaste\n");
                    break;
            }
            break;
        case 2:
            switch (opcion_computadora) {
                case 1:
                    printf("Ganaste\n");
                    break;
                case 2:
                    printf("Empate\n");
                    break;
                case 3:
                    printf("La computadora gano\n");
                    break;
            }
            break;
        case 3:
            switch (opcion_computadora) {
                case 1:
                    printf("La computadora gano\n");
                    break;
                case 2:
                    printf("Ganaste\n");
                    break;
                case 3:
                    printf("Empate\n");
                    break;
            }
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }

    return 0;
}
