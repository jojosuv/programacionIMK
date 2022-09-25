#include <stdio.h> 
#include "main.h"

int main(void)
{
    int resultado=0;
    int n1=0;
    int n2=0;

    printf("numero 1:\n");
    scanf ("%d", &n1);
    printf("numero 2:\n");
    scanf ("%d", &n2);

    resultado = mul(n1,n2);

    printf("El resultado de la multiplicacion es: %d\n",resultado);

    return 0;

}