#include <stdio.h> // Se incluye la libreria

int main()
{
    // Se definen variables
    int n1; // Guarda el numero ingresado por el usuario
    int i;  // Sera el contador de digitos

    // Se pide al usuario ingresar un numero
    printf(" Ingrese un numero: ");
    // Se lo guarda en la variable n1
    scanf("%d", &n1);

    // Si de casualidad el usuario ingresa un numero negativo lo convertimos a positivo para trabajar con valores absolutos
    if (n1 < 0)
        n1 = -n1;

    // En cada interaccion dividimos 'numero' por 10 y aumentamos 'i', serepetira hasta que numero sea 0
    for (i = 0; n1 != 0; i++)
    {
        n1 /= 10;
    }

    // Presento en pantalla el numero de digitos ingresados
    printf(" El numero tiene %d digitos. \n", i);

    return 0;
}