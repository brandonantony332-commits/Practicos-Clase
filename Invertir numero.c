#include <stdio.h>
#include <stdlib.h>  // para abs ()
int main (){
    int n, digito, invertido=0 ;
    printf("Ingrese numero entero");
    scanf ("%d",&n);

    while (n>0){
            digito = n%10 ;
            invertido = invertido*10 + digito;
            n=n/10 ;
    }
    printf ("Numero invertido , %d\n", invertido);
    return 0;
}
