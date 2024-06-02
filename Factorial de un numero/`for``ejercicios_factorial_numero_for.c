#include <stdio.h> // Se incluye la libreria

int main(){
    int n1; // Variable donde se almacenara el valor que ingrese el usuario
    long long factorial = 1; // Me permite almacenar enteros mas grandes

// Le pido al usuario que ingrese un numero
    printf( "Ingrese un numero entero : \n");

//Lo almaceno en n1
    scanf("%d", &n1);

// Se usa un if para comprobar si n1 es mayor que 0 para continuar con siguiente linea si no se cumple salta al else
    if (n1 >= 0){
        for ( int i = 1; i <= n1; ++i ){
            factorial *= i;//Se multiplica el factorial por cada numero desde 1 hasta el numero ingresado
        }

//Presento en pantalla el resultado
        printf(" El factorial de %d! = %lld\n", n1, factorial);


    }else { // Si en caso  es negativo le presento lo siguiente
        printf(" El factorial no contiene numeros negativos.\n");
    }
    return 0;
}