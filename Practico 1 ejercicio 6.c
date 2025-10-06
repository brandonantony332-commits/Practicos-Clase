#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    double x, suma = 0;
    printf("Ingrese X: ");
    scanf("%lf", &x);
    printf("Ingrese N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        suma += pow(x, i);
    }

    printf("La suma de la serie es: %lf\n", suma);
    return 0;
}
