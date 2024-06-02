#include <stdio.h> //Incluyo la libreria

int main()
{
    // Defino variables a utilizar
    int n1;                 // Guarda el numero de terminos
    int a = 1;              // Es primer termino de la serie
    long long producto = 1; // Es el producto acumulado de los terminos
    int base;               // Es la base de la serie
    int i = 0;              // Es la inicializacion para el bucle while

    // Se pide que ingrese el valor de la base
    printf(" Ingrese un valor de la base: ");
    // Se guarda en la variable base
    scanf(" %d", &base);

    // Se pide al usuario ingresar el numero de terminos
    printf(" Ingrese el valor de los terminos:");
    // Se guarda en la variable n1
    scanf("%d", &n1);

    // En cada interraccion, 'produto' se multiplica por 'a' y este mismo se actualiza multiplicandose por base
    while (i < n1)
    {
        producto *= a;
        a *= base;
        i++;
    }
    // Se imprime el resultado en pantalla
    printf(" El producto de los primeros %d terminos de la serie geometrica con base %d es : %lld\n", n1, base, producto);

    return 0;
}
