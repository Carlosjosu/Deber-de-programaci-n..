
#include <stdio.h> // Se incluye la libreria

int main() {
    // Se definen variables
    float n1; // Almacena el valor del usuario

    float result = 0; // Comienza en cero pero ira incremenntando hasta que la condiciion se cumpla, el cubo sea mayor o igaul al numero dado

    // Se solicita que ingrese por teclado el numero que se desea sacar raiz la raiz
    printf( "Ingrese el numero que desea calcular la raiz cubica \n");
    
    scanf( "%f",&n1); // Se almacena el valor ingresado por el usuario


    do{
        result += 0.001;


    }while (result * result * result <= n1 );  /* Se comprueba si result * result * result (cubo del resdulatdo) es menor o igaul que n1
        si es asi se continua aumentado result*/

    result -= 0.001;
    
// Se imprime el numero de la raiz cubica y su respuesta
    printf("La raíz cúbica de %.2f es aproximadamente %.2f\n", n1, result);

    return 0;
}
