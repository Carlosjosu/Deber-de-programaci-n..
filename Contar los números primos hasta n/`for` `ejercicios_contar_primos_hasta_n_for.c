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
       Luego se verifica si es primo o no con un segundo 'for', bucle anidado,
       Donde si 'i' es divisible por algun numero 'j' desde 2 hasta la raiz cuadrada de 'i'
       Si 'i' es divisible para 'j' se marca como no primo (es_primo = 0 )*/
    for (int i = 2; i <= n1; i++)
    {
        int es_primo = 1;
        for (int j = 2; j * j <= i && es_primo; j++)
        {
            if (i % j == 0)
            {
                es_primo = 0;
            }
        }
        if (es_primo)
        {
            if (contador > 0)
            {
                printf(",  ");
            }

            printf("%d", i);
            contador++; /* Si 'i' es primo incrementa el contador (es_primo = 1)*/
        }
    }

    // le presento al usuario cuanto numeros primos hay en el rango que ingreso
    printf(" -Hay %d numeros primos hasta %d.\n", contador, n1);

    return 0;
}