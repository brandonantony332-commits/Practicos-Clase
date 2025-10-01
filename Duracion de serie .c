#include <stdio.h>
int main(){
    int temporadas, capitulos ;
    double duracion, intro, total;

    printf("Piensa en una serie que hayas visto...\n");

    printf("¿Cuantas temporadas tiene?\n");
    scanf("%d", &temporadas);

    printf("¿Cuantos capitulos promedio tiene cada temporada?\n");
    scanf("%d", &capitulos);

    printf("¿Cuanto es la duracion en minutos aproximadamente de cada capitulo?\n");
    scanf("%lf", &duracion);

    printf("¿Cuanto es la duracion en minutos aproximadamente de su INTRO?\n");
    scanf("%lf", &intro);

    total= (temporadas*capitulos*(duracion-intro))/60 ;
    printf("En total has invertido %.2lf horas \n", total);
    return 0;

}
