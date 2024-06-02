#include <stdio.h> // Se incluye la libreria

int main()
{

    // Se definen variables a usar en el programa
    int n1;            // Guardara el valor que eingrese el usuario
    int factorial = 1; // Para calcular el factorial
    int suma = 0;      // Guardara la suma total de los factoriales
    int i = 1;         // Inicializacion del primer do while

    // Se pide al usuario ingresar un valor para calcularlo en ese rango
    printf("Ingrese el valor de rango a calcular: ");
    // Se guarda el numero en la variable 'n1'
    scanf("%d", &n1);

    // Imprime un mensaje donde se presentara la serie
    printf(" La serie es: ");

    /*Se repite desde 1 hasta n
    Se usa un segundo bucle 'do while' anidado para calcular el factorial de numero actual'i'
    En cada repeticion se multiplica 'factorial' por 'j'*/
    do
    {
        int j = 1; // Inicailizacion del segundo do while
        do
        {
            factorial *= j;
            j++;
        } while (j <= i);
        // Una vez calculado el factorial del numero actual 'i' se agrega  a 'suma'
        suma += factorial;
        /*Despues de calcular el factorial actual 'i' en la serie,
        si 'i' no es el ultimo numero se imprime el signo (" + ")
        para indicar que se sumara el siguiente factorial*/
        printf("%d", i);
        if (i < n1)
        {
            printf(" + ");
        }
        factorial = 1; // Se restablece para calcular el factorial el siguiente numero
        i++;
    } while (i <= n1);
    // Se presenta el resultado de la suma total del factorial
    printf(" = %d\n", suma);

    return 0;
}