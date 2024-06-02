#include <stdio.h> //Se incluye la libreria

int main()
{

    // Se definen variables
    int n1;           // Guarda el numero hasta el cual se sumaran, ingresado por el usuario
    float suma = 0.0; // Guarda el resultado de la serie
    int i = 2;        // Inicializacion de while

    // Se pide al usuario ingresar un valor para calcular dentro de ese rango
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // Se imprime la serie
    printf(" La serie es : 1");
    suma = 1.0;

    /* Este bucle itera  desde 2 hasta 'n'
    Se imprime el termino actual de la serie  asi '+1/i'
    Se agrega el inverso del numero actual  '1.0 / i'  a la variable suma */
    while (i <= n1)
    {
        printf(" + 1/%d", i);
        suma += 1.0 / i;
        i++;
    }

    // Presento en pantalla el resultado de la serie
    printf(" \n La suma de la serie hasta %d terminos es %.2f\n", n1, suma);

    return 0;
}