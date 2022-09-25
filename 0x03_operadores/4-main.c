#include "main.h"
#include <stdio.h>

float main ()
{
    float cm, m, km;

    printf ("Enter length in centimeter:\n");
    scanf ("%f", &cm);

    m = CMtoM(cm);
    km = CMtoKM(cm);

    printf ("Length in Meter = %.2f m\n", m);
    printf ("Length in Kilometer = %.2f km\n", km);
    return 0;

}