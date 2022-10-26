#include <stdio.h>
#include "main.h"

float main ()
{
    while(1){
    float minutos;
    float hora;
    float precio;

    char opcion;

    printf("Día de la semana: \n");
    scanf("%s",&opcion);


    printf ("A que hora fue:");
    scanf ("%f", &hora);

    printf ("cuantos minutos fueron:");
    scanf ("%e", &minutos);

    switch (opcion)
    {
        case 'L': 
        precio = LV(minutos, hora);
        break;

        case 'M':
        precio = LV(minutos, hora);
        break;

        case 'X': 
        precio = LV(minutos, hora);
        break;

        case 'J': 
        precio = LV(minutos, hora);
        break;
        
        case 'V':
        precio = LV(minutos, hora);
        break;

        case 'l':
        precio = LV(minutos, hora);
        break;

        case 'm':
        precio = LV(minutos, hora);
        break;

        case 'x':
        precio = LV(minutos, hora);
        break;

        case 'j':
        precio = LV(minutos, hora);
        break;

        case 'v':
        precio = LV(minutos, hora);
        break;

        case 'S':
        precio = SD(minutos);
        break;

        case 'D':
        precio = SD(minutos);
        break;

        case 's':
        precio = SD(minutos);
        break;

        case 'd':
        precio = SD(minutos);
        break;

    }
    
    printf("Precio: %.2f\n", precio);
    
    }
    
}