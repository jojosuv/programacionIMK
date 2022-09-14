#include "main.h"
#include <stdio.h>

/* multiplicacion de dos numeros */

int main(void)
{
    int r = 0;
    r = mul (5, 3);
    printf ("El resultado de la multiplicacion es: %d\n", r);
    r = mul (4, 0);
    printf ("El resultado de la multiplicacion es: %d\n", r);
    r = mul (7, 10);
    printf ("El resultado de la multiplicacion es: %d\n", r);
    return 0;
}
