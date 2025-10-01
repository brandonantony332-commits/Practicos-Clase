#include <stdio.h>
#include <stdlib.h>  // para abs ()
int main (){
    int num, resto, suma = 0;
    printf ("Ingrese numero entero:");
    scanf ("%d", &num);

    //Tomamos el valor absoluto para manejar negativos
    num = abs(num);

    while (num>0){
        resto = num % 10;     //obtenemos el ultimo digito
        suma = suma + resto;   // lo sumamos al acumulador
        num = num /10;      // Eliminamos el ultimo digito
    }
    printf ("La suma de los digitos es : %d\n", suma);
    return 0;
}

