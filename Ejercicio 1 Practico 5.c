#include <stdio.h>

int main() {
    int P;

    printf("Ingrese peso de una carta en gramos: ");
    scanf("%d", &P);


    if (P > 0 && P <= 50) {
        printf("Costo = Bs. 1.50\n");
    } else if (P > 50 && P <= 100) {
        printf("Costo = Bs. 4.00\n");
    } else if (P > 100 && P <= 200) {
        printf("Costo = Bs. 10.50\n");
    } else if (P > 200 && P <= 500) {
        printf("Costo = Bs. 15.00\n");
    } else if (P > 500) {
        printf("No puede enviar como carta\n");
    } else {
        printf("Peso inválido.\n");
    }

    return 0;
}
