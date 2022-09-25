#include <stdio.h>
#include "main.h"

float main ()
{
    float length,width,resultado;

    printf ("Enter length of the rectangle:\n");
    scanf ("%f", &length);
    printf ("Enter width of the rectangle:\n");
    scanf ("%f", &width);

    resultado = perimeter(length,width);

    printf ("Perimeter of rectangle = %f units\n", resultado);

    return 0;

}