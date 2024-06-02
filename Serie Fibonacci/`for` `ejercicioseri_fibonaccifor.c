#include <stdio.h> // Se incluye la libreria

// Se decalaran variables a usar en el programa
int main(){
    int n1; // Se guarda la cantidad de numeros a imprimir
    int fib1 = 0; // Guardo el primer numero que es 0
    int fib2 = 1; // Guardo el segundo numero que es 1
    int siguiente;

// Se le pide al usuario el numero a imprimir en la serie
    printf( "Ingrese  la cantidad de elementos a imprimir en la serie \n");

// se lo guarda en scanf
    scanf ( "%d",&n1);

// Se imprime en pantalla la serie
    printf("Los primeros %d elementos de la serie de Fibonacci son:\n", n1);
    printf("%d, %d", fib1, fib2);

// En esta parte fib1 y fib2 se iran actualizando
    for (int i = 3; i <= n1; i++){
        siguiente = fib1 + fib2;
        printf(",%d", siguiente);
        fib1 = fib2;
        fib2 = siguiente;
    }
    // Este printf me presenta la serie en pantalla
    printf("\n");

    return 0;
}

