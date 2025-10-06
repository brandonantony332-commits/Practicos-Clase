#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    double X, suma = 0, factorial;
    printf("Ingrese X: ");
    scanf("%lf", &X);
    printf("Ingrese N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        factorial = 1;
        for(int j = 1; j <= i; j++) factorial *= j;
        suma += pow(X, i) / factorial;
    }

    printf("La suma de la serie es: %lf\n", suma);
    return 0;
}
