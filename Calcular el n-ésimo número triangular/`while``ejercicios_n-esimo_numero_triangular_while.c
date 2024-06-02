#include <stdio.h> //Se incluye la libreria

int main()
{

    // Se definen variables
    int n1;        // Almacena o guarda el valor que ingresa el usuario
    int trian = 0; // Guarda el n-simo numero triangular
    int i = 1;     // Inicializacion de While

    // Se pide que el usario ingrese un valor
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable 'n1'
    scanf("%d", &n1);

    // MEnsaje que imprimira la serie
    printf(" La serie es: ");

    /*Itera desde 1 hasta n
    en cad iteraccion se agrega ekl valor de 'i' a 'triangular', acumulando la suna de los numeros
    Se imprime el valor de 'i' como parte de la serie
    si 'i' no es el ultimo numero de la serie se imprime un signo mas indicando que el
    siguiente digito se sumara*/
    while (i <= n1)
    {
        trian += i;
        printf("%d", i);
        if (i < n1)
        {
            printf(" + ");
        }
        i++;
    }

    // Se imprime el resultado del numero triangular
    printf(" \n El %d-esimo numero triangular es %d.\n", n1, trian);

    return 0;
}