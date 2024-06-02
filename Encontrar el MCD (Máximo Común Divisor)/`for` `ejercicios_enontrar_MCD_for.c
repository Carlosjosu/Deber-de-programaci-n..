#include <stdio.h> // Se incluye la libreria

int main()
{
    // Se declaran variables
    int n1; // Se guarda el prime valor ingressado por el usuario
    int n2; // Se guarda el segundo numero ingresado por el usuario

    // Se pide al usuario ingresar un numero
    printf(" Ingrese el primer numero: ");
    // Se lo guarda en la variable 'n1'
    scanf("%d", &n1);
    // Se pide al usuario ingresar un segundo numero
    printf(" Ingrese el segundo numero: ");
    // Se lo guarda en la variable 'n2'
    scanf("%d", &n2);

    // Se definen dos variables mas a usar para el calculo del MCD (inicializacion)
    int a = n1;
    int b = n2;

    /* Se define una variable mas llamada tpb dode se guardara temporalmente b,
    el bucle se ejcuta mientrras 'b' no sea 0
    dentro del bucle se actualiza 'tpb' con el valo actual de 'b'
    'b' se actualizara con el residuo de 'a' divido por 'b'
    'a' se actualiza con el valor que tenia 'b' antes de calcular el residuo*/
    for (int tpb; b != 0; tpb = b, b = a % b, a = tpb)
    {
    }

    // Imprime en pantalla los numeros ingresados y el resuldo de MCD
    printf(" El MCD de %d y %d es %d.\n", n1, n2, a);

    return 0;
}