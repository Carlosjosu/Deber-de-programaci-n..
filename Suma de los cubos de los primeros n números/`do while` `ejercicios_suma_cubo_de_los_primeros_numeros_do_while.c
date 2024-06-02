#include <stdio.h> //Se incluye la libreria

int main()
{

    // Se definen variables
    int n1;       // Guarda el numero hasta el cual se sumaran, ingresado por el usuario
    int suma = 0; // Guarda el resultado de la suma de los cubos de los primeros 'n' numeros
    int i = 1;    // Inicializa 'do while'

    // Se pide al usuario ingresar un valor para calcular dentro de ese rango
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    /* Comienza a iterar desde 1 hasta 'n'
    En cada iteraccion del bucle
    Se calcula el cuadrado de numero actual 'i * i * i'
    El cubo calculado se suma a la variable 'suma'*/
    do
    {
        suma += i * i * i;
        i++;
    } while (i <= n1);

    // Presento en pantalla el resultado de la suma de los cubos de los primeros 'n' numeros
    printf(" La suma de los cubos de los primeros numeros hasta %d es %d.\n", n1, suma);

    return 0;
}