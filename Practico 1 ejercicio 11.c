#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Ingrese dos números enteros: ");
    scanf("%d %d", &a, &b);

    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("El MCD es: %d\n", a);
    return 0;
}
