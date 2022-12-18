#include <stdio.h>

int main()
{
    
    int numeros2[3][3];
    int numeros[3][3];

    printf("Ingrese nueve numeros\n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d", &numeros[i][j]);
        }
    }
    
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
        {
            printf("%d ",numeros[i][j]);
        }
        printf("\n");
    }
    
    printf ("\n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3;j++)
        {
            printf("%d ",numeros[j][i]);
        }
        printf("\n");
    }
}
    