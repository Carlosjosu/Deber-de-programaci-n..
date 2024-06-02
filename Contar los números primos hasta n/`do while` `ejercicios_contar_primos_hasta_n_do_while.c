#include <stdio.h> // Se incluye la libreria

int main()
{

    // Se definen variables
    int n1;           // Guarda el valor que ingresda el usuario
    int contador = 0; // Para contar los numeros primos

    // Se pide al usuario que ingrese un valor para poder calcular en ese rango
    printf(" Ingrese el valor del rango a calcular: ");
    // Se guarda en la variable 'n1'
    scanf("%d", &n1);

    // Presento los numeros primos
    printf(" Los numero primos hasta %d son : ", n1);

    /* Se pone en funcionamiento desde 2 hasta 'n1'
       para cada numero 'i' se asume que es primo
       Luego se verifica si es primo o while 
       Donde si 'i' es divisible por algun numero 'j' desde 2 hasta la raiz cuadrada de 'i'
       Si 'i' es divisible para 'j' se marca como no primo (es_primo = 0 )*/
    int i = 2; // Inicializacion de 'do while'
    do
    {
        int es_primo = 1;
        int j = 2; // Inicializacion de while
        while (j * j <= i && es_primo)
        {
            if (i % j == 0)
            {
                es_primo = 0;
            }
            j++;
        }
        if (es_primo)
        {
            if (contador > 0)
            {
                printf(",  ");
            }

            printf("%d", i);
            contador++; /* Si 'i' es primo incrementa el contador (es_primo = 1)*/
        };
        i++;

    } while (i <= n1);

    // le presento al usuario cuanto numeros primos hay en el rango que ingreso
    printf(" -Hay %d numeros primos hasta %d.\n", contador, n1);

    return 0;
}