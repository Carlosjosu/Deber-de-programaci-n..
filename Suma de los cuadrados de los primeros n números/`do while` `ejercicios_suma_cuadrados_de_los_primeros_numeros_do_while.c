#include <stdio.h> //Se incluye la libreria

int main()
{

    // Se definen variables
    int n1;       // Guarda el numero hasta el cual se sumaran, ingresado por el usuario
    int suma = 0; // Guarda el resultado de la suma de los cuadrados de los primeros 'n' numeros
    int i = 1;    // Inicializacion de do while

    // Se pide al usuario ingresar un valor para calcular dentro de ese rango
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    /* Se ejecutara mientra 'i' sea menor o igual que 'n'
    En cada iteraccion del bucle
    Se calcula el cuadrado de numero actual 'i * i'
    El cuadrado calculado se suma a la variable 'suma'
    se incrementa 'i' para pasar al siguiente numero*/
    do
    {
        suma += i * i;
        i++;
    } while (i <= n1);

    // Presento en pantalla el resultado de la suma de los cuadrados de los primeros 'n' numeros
    printf(" La suma de los cuadrados  de los primeros numeros  hasta %d es %d.\n", n1, suma);

    return 0;
}