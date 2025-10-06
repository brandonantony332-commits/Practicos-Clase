#include <stdio.h>

int main() {
    int N, i, suma = 0;
    printf("Ingrese N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i += 2) {
        suma += i;
    }

    printf("La suma de los números impares hasta %d es: %d\n", N, suma);
    return 0;
}
