#include <stdio.h> //Se incluye la libreria

int main()
{

    // Se definen variables
    int n1;       // Guarda el numero hasta el cual se sumaran lo pares
    int suma = 0; // Guarda el resultado de la suma de los numeros pares

    // Se pide al usuario ingresar un valor para calcular dentro de ese rango
    printf(" Ingrese el valor del rango a  calcular los numeros pares: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    /*  Este bucle se repite desde 2 en adelante hasta 'n'
    La variable 'i' inicia en 2 ya que se suma desde el primer numero par
    En cada intervalo 'i' se incrementa en 2 para que solo consideremos los pares
    Por cada intervalo del bucle 'i' se agrega a la variable 'suma'*/
    for (int i = 2; i <= n1; i += 2)
    {
        suma += i;
    }

    // Presento en pantalla el resultado de la suma de los numeros pares
    printf(" La suma de los numeros pares hasta %d es %d.\n", n1, suma);

    return 0;
}