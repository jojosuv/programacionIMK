#include <stdio.h>

//pide 5 calificaciones y que de calificacion final y puntos totales
// puntost=puntostotales cf=calificacionfinal

float main ()
{
    float c1,c2,c3,c4,c5,cf,Percentage,puntost;

    printf("Enter marks of five subjects:\n");
    scanf("%f%f%f%f%f", &c1, &c2, &c3, &c4, &c5);
    
    puntost= (c1+c2+c3+c4+c5);
    cf= (puntost/5);
    Percentage= ((puntost/500)*100);

    printf("Total marks = %.2f\n", puntost);
    printf("Average marks = %.2f\n", cf);
    printf("Percentage = %.2f\n", cf);

    return 0;
}