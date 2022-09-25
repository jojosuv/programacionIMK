#include <stdio.h>
#include "main.h"

int main (void)
{
   int consumo;
   printf("ingrese su consumo mensual en Kwh:\n"),
   scanf(%d ,&consumo);
   if (consumo >=0 && consumo <=175) 
   (
    cobro = 0.786 * consumo;
    printf("consumo basico\n");
   )
   if (consumo >=176 && consumo<= 400)
   (
    cobro =175* .786;
    cobro=cobro + ((consumo -175)* .911);
    printf("consumo intermedio bajo\n");
   )
   if (consumo >=401 && consumo <= 600);
   (
    cobro= 175* .786; //consumo basico
    cobro= (400-175)* .911; //consumo I.bajo
    cobro= cobro + ((consumo - 400) * 1.177); //consumo I.alto
    printf("consumo intermedio alto")
   )
   if(consumo >=601)
   (
    cobro= 175* .786; //consumo basico
    cobro= (400-175)* .911; //consumo I.bajo
    cobro= (600-400)* 1.177; //consumo I.alto
    cobro = cobro + ((consumo - 600) * 3.314;
    printf ("consumo excedente\n");
   )

}

