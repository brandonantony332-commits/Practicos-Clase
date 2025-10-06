#include <stdio.h>

int main() {
    long long N, original, invertido = 0, digito;

    printf("Ingrese un número entero: ");
    scanf("%lld", &N);

    original = N;
    if(N < 0) N = -N;
    while(N > 0) {
        digito = N % 10;
        invertido = invertido * 10 + digito;
        N /= 10;
    }

    if(invertido == original)
        printf("%lld es capicúa.\n", original);
    else
        printf("%lld no es capicúa.\n", original);

    return 0;
}
