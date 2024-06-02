#include <stdio.h> // Se incluye la libreria
// Defino la variables a utilizar
int main() {
    int num;
    int inverso = 0;
    // le pido al usuario ingresar un numero
    printf("Ingrese un número \n ");
    scanf("%d", &num);

    
    for (int cnum = num; cnum > 0; cnum /= 10) { // Se define una nueva variable cnum copia de num
        int digito = cnum % 10;  // se define una nueva variaviable digito el cual almacenara lo que esta despues del igual
        // El inverso cumple sun funcion en ir ubicando el numero original al revez
        inverso = inverso * 10 + digito;  
    }
// Imprime en pantalla el numero que ingreso y el inverso
    printf("El inverso de %d es %d\n", num, inverso);

    return 0;
}
