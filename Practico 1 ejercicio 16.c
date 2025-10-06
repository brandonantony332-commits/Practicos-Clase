#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    bool esPrimo = true;

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    if(n <= 1) {
        esPrimo = false;
    } else {
        for(i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if(esPrimo)
        printf("%d es primo.\n", n);
    else
        printf("%d no es primo.\n", n);

    return 0;
}
