#include <stdio.h> // Se incluye la libreria

int main() {
    // Se definen variables
    int n1;
    int n2;
    int resultado = 1;

   // Se pide ingresar dos valores tanto n1 = base y n2 = exponente
    // Asi mismo se los almacena en n1 y n2
    printf("Ingrese la base\n ");
    scanf("%d", &n1);

    printf("Ingrese el exponente\n ");
    scanf("%d", &n2);

    for (int i = 0; i < n2; i++) { //i = 0 conforme se repita el bucle por la condicion i < n2 incrementara el resulatdo con i++
        resultado *= n1;
    }

    // Se imprime en pantalla la base, el exponete y el resultado
    printf("%d^%d = %d\n", n1, n2, resultado);

    return 0;
}
