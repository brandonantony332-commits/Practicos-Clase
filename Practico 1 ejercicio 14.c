#include <stdio.h>

int main() {
    int n, i;
    long long f0 = 1, f1 = 1, fn;

    printf("Ingrese el número n: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Fibonacci[%d] = 1\n", n);
    } else if(n == 1) {
        printf("Fibonacci[%d] = 1\n", n);
    } else {
        for(i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        printf("Fibonacci[%d] = %lld\n", n, fn);
    }

    return 0;
}
