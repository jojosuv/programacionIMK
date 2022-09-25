#include <stdio.h>
#include <math.h> //funciones matematicas

//expo=exponente power= resultado pow= funcion para elevar    el -lm es necesario ponerlo para que funcione

int main ()
{
    double base,expo, power;

    printf("Enter base:\n");
    scanf("%lf", &base);
    printf("Enter exponent:\n");
    scanf("%lf", &expo);

    power= pow(base,expo);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, expo, power);

    return 0;
}

