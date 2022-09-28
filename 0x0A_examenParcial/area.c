#include <stdio.h>
#include <math.h>
#include "main.h"

float area (float volumen )
{
    float radio;
    float areaT;
    float altura;
    float costo;
    float ahorro;
    float costoAnterior;

    radio= (cbrt (2*volumen/12.56));
    altura= ((volumen)/(3.14*pow(radio,2)));
    areaT= ((6.28*pow(radio,2))+(6.28*radio*altura));
    costo= ((2.45*areaT)/1000);

    if (volumen<500)
    {
        costoAnterior= (volumen*1.006/500);
    }
    else if (volumen>=500 && volumen<1000)
    {
        costoAnterior= (volumen*1.006/500);
    }
    else if (volumen>=1000 && volumen<1500)
    {
        costoAnterior= (volumen*1.6816/1000);
    }
    else if (volumen>=1500 && volumen<3000)
    {
        costoAnterior= (volumen*1.9610/1500);
    }
    else if(volumen>=3000)
    {
        costoAnterior= (volumen*3.1038/3000);
    }

    ahorro= (costoAnterior-costo);


    printf("Radio de la tapa: %.2f cm\n", radio);
    printf("Area total de la lata: %.2f cm2\n", areaT);
    printf("costo de fabricacion: $ %.2f\n", costo);
    printf("costo anterior para la lata de %.2f ml: $ %.2f\n", volumen, costoAnterior);
     printf("Ahorro: %.2f\n", ahorro);

}