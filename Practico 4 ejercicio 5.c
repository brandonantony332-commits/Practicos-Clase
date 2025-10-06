#include <stdio.h>

int main() {
    long long N, original;
    int digito;
    char complemento[20];
    int i = 0;

    printf("Ingrese un número entero: ");
    scanf("%lld", &N);

    if(N < 0) N = -N;
    original = N;

    if(N == 0) {
        printf("Complemento a 9: 9\n");
        return 0;
    }

    while(N > 0) {
        digito = N % 10;
        complemento[i++] = '0' + (9 - digito);
        N /= 10;
    }

    printf("Complemento a 9 de %lld es: ", original);

    for(int j = i - 1; j >= 0; j--) {
        printf("%c", complemento[j]);
    }
    printf("\n");

    return 0;
}
