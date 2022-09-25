#include <stdio.h>

//area del triangulo con la base y la altura
// h=altura b=base

float main ()
{
    float h,b,area;

    printf("Enter base of the triangle:\n");
    scanf("%e", &b);
    printf("Enter height of the triangle:\n");
    scanf("%e", &h);

    area= (h*b/2);

    printf("Area of the triangle = %.2e\n", area);

    return 0;
}