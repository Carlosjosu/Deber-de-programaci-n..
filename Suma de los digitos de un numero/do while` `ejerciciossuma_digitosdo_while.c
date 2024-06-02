#include <stdio.h> // Se incluye la libreria

int main(){
    // Se definen varaibles a usar en el programa
    int n1; // Almacena el valor ingresado por el usuario

    int suma = 0; /* Se inicia en 0, conforme vaya ejecutandose el programa 
    se ira actualizando por el valor actual de la suma despues de encontar un digito*/ 

    int digito; // Guarda el ultimo digito en cada interaccion

    // Se pide al usuario ingresar un numero
    printf( " Ingrese el numero a sumar \n");
    scanf( "%d", &n1);//  Se gaur en n1

// Se realiza al menos una interaccion
    do{
        //Se opbtien el ultimo digito del numero
        digito = n1 % 10; 

        // Se añade el ultimo digito a la suma
        suma += digito;

        // se elimina el ultimo digito del numero
        n1 /= 10;


    } while (n1 > 0); // Este bucle continuara hasta que el numero sea mayor que 0

    printf(" La suma de los digitos del numero ingresado es: %d \n ", suma);// Se presenta en pantalla el resultado

    return 0;
}