#include <stdio.h>

int main()
{
    int numero3[2][2]; //esapcio del arreglo
    int numeros2[2][2];
    int numeros[2][2];

    printf("Ingrese cuatro numeros\n");

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            scanf("%d", &numeros[i][j]);
        }
    }
    
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2;j++)
        {
            printf("%d ",numeros[i][j]);
        }
        printf("\n");
    }
    
    printf("Ingrese cuatro numeros\n");
    
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            scanf("%d", &numeros2[i][j]);
        }
    }
    
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("%d ",numeros2[i][j]);
        }
        printf("\n");
    }

    //numero3[0][0]=numeros[0][0]+numeros2[0][0];   
    //numero3[1][0]=numeros[1][0]+numeros2[1][0];  
    //numero3[0][1]=numeros[0][1]+numeros2[0][1];  
    //numero3[1][1]=numeros[1][1]+numeros2[1][1];   en ciclo for es

    for (int i = 0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            numero3[i][j]= numeros[i][j] + numeros2[i][j];
        }
    }

    printf("La nueva matriz es de:\n");
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("%d ",numero3[i][j]);
        }
        printf("\n");
    }
    */
}