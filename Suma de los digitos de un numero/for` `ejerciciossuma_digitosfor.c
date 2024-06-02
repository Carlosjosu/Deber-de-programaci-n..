#include <stdio.h> // Se ingresa la libreria 
/*Definimos variables las cuales vamos a usar en el programa en este este caso sran de tipo
entero por eso usamos int*/ 
int main(){
    int num;
    int suma = 0;

// Pedimos al usario que ingrese el numero que desee ser calculado 
    printf(" Ingrese el numero a sumar \n");

// Leemos el numero para poder seguir con la ejcucion con el uso de scanf
    scanf( "%d", &num);
/*Ahora usamos el ciclo repetitivo For en el cual ingresamos una variable mas /cnum/ que es una coipa de /num/ para poder
reutilizarlo y no haya algun cambio con /num/*/  
    for ( int cnum =num; cnum > 0; cnum /= 10 ){
        /*Ingresamos otra variable que se llama dijito de tipo entero el cual sera igual a cnum % 10(actualizacion) 
        la misma que sera usada en la siguiente linea de codigo*/ 
        int digito = cnum % 10;
        /*La suma sera de los dijitos que resularon de la veces que se dividio para 10 ejm: 
        suma = 0 al hacer la primera ejecucion este valor cambiara
        suponiendo que el numero es 593
        suma = 0 + 3 = 3
        suma = 3 + 9 = 12
        suma = 12 + 5 = 17 
        estos valores se iaran tomando de la variable int digito = cnum % 10;*/ 
        suma += digito;
    }
/* Se imprime en pantalla el numero que ingreso el usuario y la suma total de los digitos */
    printf(" la sumatoria de los digitos de %d es %d\n", num, suma);

    return 0;

}