#include <stdio.h>

int main() {
    int a, b, mcd, mcm, temp;
    printf("Ingrese dos números enteros: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;


    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    mcd = a;


    mcm = (x * y) / mcd;
    printf("El MCM es: %d\n", mcm);
    return 0;
}
