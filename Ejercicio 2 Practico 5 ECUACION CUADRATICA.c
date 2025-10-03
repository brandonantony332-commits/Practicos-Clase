#include <stdio.h>
#include <math.h>
int main (){
    double a,b,c,D,x1,x2;

    printf("Resolver ecuación cuadratica: ax^2+bx+c=0\n");
    printf("Ingrese a:\n");
    scanf("%lf",&a);
    printf("Ingrese b:\n");
    scanf("%lf",&b);
    printf("Ingrese c: \n");
    scanf("%lf",&c);

    if (a==0){
        printf("No es una ecuación cuadratica\n");
    } else {
        D=b*b-4*(a*c);

        if (D<0){
            printf ("No existen soluciones reales\n");
        } else
        if (D==0) {
        x1=-b/(2*a);
        x1=x2;
        printf ("Una solución real doble x=%2lf\n", x1);
        }
        else {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("Dos soluciones reales:\n");
        printf("x1=%2lf\n",x1);
        printf("x2=%2lf\n",x2);
        }
        }
        return 0;
        }
