#include "main.h"
#include <stdio.h>

/**
 *Este programa suma dos numeros
 *Return:0 if succeed
 */

int main (void)
{
    int suma = 0;
    
    suma = add(12,10);
    
    /* add=sumar, en los parentesis puede ser cualquier num  */
    printf("El valor de la suma es: %d\n" ,suma);
    
    /* porcentaje, este significa incluir y d es porque es un numero pero si fuera letra sería c, y luego el",n"
     es para que sepa que va a poner y por cada variable habrá un porcentaje si fueran dos seria "%d %d\n", n, m*/

    return 0;
}