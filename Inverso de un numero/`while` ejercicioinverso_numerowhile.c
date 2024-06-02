#include <stdio.h> // Se incluye la libreria

int main(){
// Se definen la variables a usar en el programa
    int n1; //Se almacena el valor ingresado por el usaurio
    int cn1; // Es para almacenar una copia de n1 para prentarlo despues en pantalla
    int inverso = 0; // Se inicia en 0, pero conforme vaya el programa se actualizara para construir el numero inverso
    int dig; // Se almacena el ultimo digito del numero en cada interaccion

// Pedimos al usuario que ingrese el numero
    printf(" Ingrese el numero : \n ");
    //Lo almacenamos en la variable n1
    scanf("%d", &n1);
    

    cn1 = n1; // Se hace una copia de n1

//Calculamos el inverso del numero
    while (n1 != 0){ // Se comprueba si n1 es igaul = 0
        dig = n1 % 10; // Se obtiene el ultimo digito del numero

        inverso = inverso * 10 + dig; // Se añade el digito al inverso

        n1 /= 10; // Se elimina el ultimo digito del numero para que el bucle continue con los digitos restantes
    }
// Se presenta en pantalla el resultado
    printf(" El inverso del numero ingresado %d es:\n %d ", cn1, inverso);
    
    return 0;

}