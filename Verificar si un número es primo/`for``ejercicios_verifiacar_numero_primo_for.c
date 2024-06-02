#include <stdio.h> // Se incluye la libreria

int main()
{
    // Se declaran variables
    int n1;           // Guarda el numero que ingresa el usuario
    int es_primo = 1; // Se inicializa en 1 asumiendo  que el numero es primo al principio

    // Se pide al usuario ingresar un numero
    printf("Ingrese un numero: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // Se ejecuta la condicion if y si este es veradero termina con 'return 0;'
    if (n1 <= 1)
    {
        printf("%d no es primo.\n", n1);
        return 0;
    }

    /* Se ejecuta for el cual iteracciona dedse 2 hasta la mitad del numero ingresado y verifica si es divible
     por algun numero en ese rango, si lo es cambia el valor de 'es_primo' a 0,
     indicando que el numero no es primo*/
    for (int i = 2; i <= n1 / 2 && es_primo; i++)
    {
        if (n1 % i == 0)
        {
            es_primo = 0; // El numero no es primo
        }
    }
    // Se imprime en pantalla si es primo o no es primo
    printf("%d %s primo. \n", n1, es_primo ? "si es" : " no es");

    return 0;
}