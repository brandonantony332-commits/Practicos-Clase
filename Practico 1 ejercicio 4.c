#include <stdio.h>

int main() {
    int N, i, suma = 0;
    printf("Ingrese N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        if(i % 2 == 0)
            suma -= i;
        else
            suma += i;
    }

    printf("La suma alternada hasta %d es: %d\n", N, suma);
    return 0;
}
