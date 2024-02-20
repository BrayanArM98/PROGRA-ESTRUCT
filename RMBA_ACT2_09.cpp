//Brayan Arturo Rocha Meneses Matricula:371049
//Fecha 14/02/2024 19/02/24
//Algoritmo que lea 3 números y desplegar los 3 números en orden ascendente
//RMBA_ACT2_09_432

#include <stdio.h>

int main ()
{
    int n1,n2,n3;

    printf("Ingrese el primer numero: \n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero: \n");
    scanf("%d", &n3);

   if (n1 > n2) {
        float temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        float temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        float temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Los numeros en orden ascendente son: %.2d, %.2d, %.2d\n", n1, n2, n3);


    return 0;
}