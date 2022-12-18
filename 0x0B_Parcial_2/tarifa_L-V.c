#include <stdio.h>
#include "main.h"

float LV(int minutos, float hora)
{    
    float precio;

    if (hora>=8 || hora <=20)
    {
        precio = .60 * minutos;

    }
     if (hora < 8 || hora > 20)
    {
        precio = .30 * minutos;       
    }

    return (precio);
      
}