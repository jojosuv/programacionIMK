#include <stdio.h>
#include <math.h>
#include "main.h"

float main ()
{
    float volumen;
    float gramos;
    float areafinal;

    char opcion;

    printf("Elige el tipo de producto: \n");
    printf("a - Aceite \n");
    printf("b - Alcohol \n");
    printf("c - Gasolina \n");
    printf("d - Acetona \n");
    scanf("%c",&opcion);

    printf("\nIngresa el volumen a envasar: \n");
    scanf("%f",&volumen);

    switch (opcion)
    {
        case 'a':
        gramos = aceite(volumen);
        areafinal = area(volumen);
        break;
        case 'b':
        gramos = alcohol(volumen);
        areafinal = area(volumen);
        break;
        case 'c':
        gramos = gasolina(volumen);
        areafinal = area(volumen);
        break;
        case 'd':
        gramos = acetona(volumen);
        areafinal = area(volumen);
        break;
        default:
        printf("Opcion no valida\n");
        return(1);
    }
    printf(" %.2f ml en gramos = %.2f gr\n",volumen,gramos);
}