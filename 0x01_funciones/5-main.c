#include "main.h"
#include <stdio.h>

/* dividir 2 numeros */

int main(void)
{
    int re = 0;
    re = div(5,5);
    printf ("El resultado de la division es: %d\n", re);
    re = div(0,1);
    printf ("El resultado de la division es: %d\n", re);
    re = div(8,8);
    printf ("El resultado de la division es: %d\n", re);
    return 0;
}