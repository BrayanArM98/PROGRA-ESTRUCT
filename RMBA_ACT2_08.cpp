//Brayan Arturo Rocha Meneses Matricula:371049
//Fecha 14/02/2024 19/02/24
//Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
//RMBA_ACT2_08_432

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

    if (n1 < n2 && n3 < n1){
        printf("El numero del medio es el primero: %d", n1);
    } else if (n2 < n3 && n1 < n2){
        printf("El numero del medio es el segundo: %d", n2);
    } else {
        printf("El numero del medio es el tercero: %d", n3);
    }

    return 0;
}