#include <stdio.h> //Se incluye la libreria

int main(){
    //Definimos variables
    int n1; // Sera usada para guardar el numero que ingrese el usuario

    int suma = 0; /* Se inicia en 0, conforme vaya ejecutandose el programa 
    se ira actualizando por el valor actual de la suma despues de encontar un digito*/

    int dig; // Guarda el ultimo digito en cada interaccion

    //Le pedimos al usuario que ingrese el numero a sumar
    printf(" Ingrese el numero a sumar: \n");

    // Guardamos el numero para usarlo en la siguiente linea de codigo
    scanf("%d", &n1);

    while (n1 > 0){

        //Con esta linea de codigo obtenemos el ultimo digito 
        dig = n1 % 10;

        // Se añade el ultimo digito a la suma
        suma += dig;

        /* se elimina el ultimo digito del numero ya que empezamos a
        separar los digitos de derecha a izquierda asi que el ultimom digito seria el primero*/
        n1 /= 10;

    }
//Presentamos en pantalla la suma 
printf(" La suma de los digitos del numero es : %d\n", suma);

return 0;
}