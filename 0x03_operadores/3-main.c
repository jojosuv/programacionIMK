#include <stdio.h>
#include "main.h"

float main ()
{
    float radius,diameter,circumference,area;

    printf ("Enter radius of circle:\n");
    scanf ("%f", &radius);

    diameter = diameterC(radius);
    circumference =circumferenceC(radius);
    area = areaC(radius);

    printf ("diameter of circle = %.2f units\n", diameter);
    printf ("circumference of circle = %.2f units\n", circumference);
    printf ("area of circle = %.2f units\n", area);

    return 0;

}