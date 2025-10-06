#include <stdio.h>

int main() {
    long long N;
    int digito, contador = 0;

    printf("Ingrese un n�mero entero: ");
    scanf("%lld", &N);

    if(N < 0) N = -N;

    while(N > 0) {
        digito = N % 10;
        if(digito % 2 == 0) contador++;
        N /= 10;
    }

    printf("Cantidad de d�gitos pares: %d\n", contador);
    return 0;
}
