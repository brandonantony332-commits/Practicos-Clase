#include <stdio.h>

int main() {
    int N, i;
    long long factorial = 1;
    printf("Ingrese N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        factorial *= i;
    }

    printf("El factorial de %d es: %lld\n", N, factorial);
    return 0;
}
