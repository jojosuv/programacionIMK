#include "main.h"
#include <stdio.h>

/* que calcule el modulo de un numero */

int main(void)

{
    int r = 0;
    r= mod(430,2);
    printf ("El modulo es: %d\n", r);
    r= mod(7,3);
    printf("El modulo es: %d\n", r);
    r=mod(15,3);
    printf("El modulo es: %d\n", r);
    return 0;
}