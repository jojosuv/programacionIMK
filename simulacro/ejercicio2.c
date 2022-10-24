# include <stdio.h>
#include <math.h>

int main ()

{
    float S;
    float a;
    float b;
    float c;
    float area;
    float p;

    printf ("Dame un lado del triangulo\n");
    scanf ("%f", &a);
    printf ("Dame otro lado del triangulo\n");
    scanf ("%f", &b);
    printf ("Dame otro lado del triangulo\n");
    scanf ("%f", &c);

    S= (a+b+c)/2;

    area = sqrt(S*(S-a)*(S-b)*(S-c));

    p= a+b+c;


    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf ("El area es de %.2f y el perimetro es %.2f", area, p);
    } 
    else
    {
        printf("no existe un triangulo arbitrario\n");
    }

    return (0);
}