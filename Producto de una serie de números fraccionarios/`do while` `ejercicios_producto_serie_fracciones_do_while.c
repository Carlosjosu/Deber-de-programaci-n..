#include <stdio.h> //Se incluye la libreria

int main()
{

    // Se definen variables
    int n1;              // Guarda el numero hasta el cual se multiplicara, ingresado por el usuario
    float product = 1.0; // Guarda el resultado de la serie
    int i = 2;           // Inicializacion de while

    // Se pide al usuario ingresar un valor para calcular dentro de ese rango
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // Se imprime la serie
    printf(" La serie es : 1");

    /* Este bucle itera  desde 2 hasta 'n'
    Se imprime el termino actual de la serie  asi '+1/i'
    Se agrega el inverso del numero actual  '1.0 / i'  a la variable suma */
    if (n1 >= 2)
    { // Me aseguro que 'n' sea al menos 2 para poder ejecutar
        do
        {
            printf("* 1/%d", i);
            product *= 1.0 / i;
            i++;
        } while (i <= n1);
    }

    // Presento en pantalla el resultado de la serie
    printf(" \n El producto de la serie hasta %d terminos es %.6f\n", n1, product);

    return 0;
}