#include <stdio.h> //Se incluye la libreria

int main()
{

    // Se definen variables a usar en el programa
    int n1;    // Guarda el numero hasta el cual se sumaran los numeros impares
    int suma;  // Guarda el resultado de la suma de los numeros impares
    int i = 1; // Inicializacion de do while

    // Se pide al usuario ingresarar un valor para definir un rango a calcular
    printf(" Ingrese un numero para calcular los impares dentro de ese rango: ");

    // Se guarda en la variable n1
    scanf("%d", &n1);

    /*Este bucle se repite sobre todos los numeros desde 1 hasta 'n'
    en cada repeticion  se verifica si el numero 'i' es impar utilizando el operador '%'
    Si 'i' es diferente de 0, entonces es impar
    Si 'i' es impar se agraga a la variable 'suma'*/
    do
    {
        if (i % 2 != 0)
        {
            suma += i;
        }
        i++;
    } while (i <= n1);

    // Imprime en pantalla el ressultado de la suma
    printf(" La suma de los numeros impares hasta %d es de %d.\n", n1, suma);

    return 0;
}