#include <stdio.h> // Se incluye la libreria

int main(){
    int n1; // Variable donde se almacenara el valor que ingrese el usuario
    int suma = 0; // Almacena el resultado  de la suma de los terminos
    int i = 1; // Inicalizacion para el bucle while

// Le pido al usuario que ingrese un numero
    printf( "Ingrese un numero : \n");

//Lo almaceno en n1
    scanf("%d", &n1);

// En cada interaccion se suma el valor de 'i' a la variable 'suma'
    while ( i<= n1 ){
        suma += i;
        i++;
    }
// Presenta en pantalla el resulatdo de la suma
    printf(" La suma de los primeros %d terminos de la serie aritmetica es: %d\n ", n1, suma);


    return 0;
}