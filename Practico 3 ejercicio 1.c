#include <stdio.h>

int main() {
    int N, i, suma = 0;
    printf("Ingrese N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        suma += i;
    }

    printf("La suma de 1 a %d es: %d\n", N, suma);
    return 0;
}
