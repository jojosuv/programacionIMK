#include <stdio.h> 
#include "main.h"

float main(void)
{
    float resultado=0;
    float n1=0;
    float n2=0;

    printf("numero 1:\n");
    scanf ("%e", &n1);
    printf("numero 2:\n");
    scanf ("%e", &n2);

    resultado = div(n1,n2);

    printf("El resultado de la division es: %e\n",resultado);

    return 0;

}