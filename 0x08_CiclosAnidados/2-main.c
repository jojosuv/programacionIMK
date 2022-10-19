#include <stdio.h>

int main()
{
    int F; //filas
    int C; //columnas
    printf("ingrese el numero de filas\n");
    scanf("%d", &F);
    printf("ingrese el numero de columnas\n");
    scanf("%d", &C);

    for (int i=0; i<F; i++ )
    {

        for(int j=0; j<C; j++)    
        {
            printf("*");
        }
        printf("\n");

    }

    return(0);
}