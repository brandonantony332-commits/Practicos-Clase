#include <stdio.h>

int main() {
    int N, i;
    long long producto = 1;
    printf("Ingrese N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        producto *= i;
    }

    printf("El producto de 1 a %d es: %lld\n", N, producto);
    return 0;
}
