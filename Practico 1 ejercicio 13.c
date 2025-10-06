#include <stdio.h>

int main() {
    int i, j;
    printf("Tabla de sumar (1 al 10):\n");
    printf("     ");
    for(i = 1; i <= 10; i++) printf("%4d", i);
    printf("\n--------------------------------------------\n");

    for(i = 1; i <= 10; i++) {
        printf("%2d |", i);
        for(j = 1; j <= 10; j++) {
            printf("%4d", i + j);
        }
        printf("\n");
    }

    return 0;
}
