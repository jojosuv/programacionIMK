#include <stdio.h>

int main()
{
    
    int mapX = 8;
    int mapY = 8;
    char casilla[mapX][mapY];
    char boton;

    for(int i = 0; i<mapY; i++)
    {
        for(int j = 0; j<mapX;j++)
        {
            casilla[i][j]=' ';
        }
    }

    casilla[0][0]='N';
    casilla[0][2]='N';
    casilla[1][0]='N';
    casilla[1][2]='N';
    casilla[1][4]='N';
    casilla[1][6]='N';
    casilla[2][0]='N';   
    casilla[2][3]='N';
    casilla[2][4]='N';
    casilla[2][5]='N';
    casilla[3][1]='N';
    casilla[7][7]='N';
    casilla[4][1]='N';
    casilla[4][3]='N';
    casilla[4][4]='N';
    casilla[4][6]='N';
    casilla[5][1]='N';
    casilla[5][3]='N';
    casilla[5][4]='N';
    casilla[5][6]='N';
    casilla[6][0]='N';
    casilla[6][1]='N';
    casilla[6][2]='N';
    casilla[7][5]='N';
    casilla[7][6]='N';
    casilla[7][4]='N';

    casilla[0][7]='+';

    for(int i = 0; i<mapY; i++)
    {
        for(int j = 0; j<mapX;j++)
        {
            printf("[%c]", casilla[i][j]);
        }
        printf("\n");
    }

    int x=0;
    int y=7;

    while(casilla[7][0]!='+')
    {
    printf ("elige a donde quieres que vaya *w,s,a,d*\n");
    scanf("%c", &boton);
        
    
    if (boton=='w')
    {
        if (casilla[x-1][y]==' ')
        {
            casilla[x][y]=' ';
            
            casilla[x-1][y]='+';

            x=x-1;
        }
        else
        {
            printf ("No\n");
        }

    }
        
   if (boton=='s')
    {
        if (casilla[x+1][y]==' ')
        {
            casilla[x][y]=' ';

            casilla[x+1][y]='+';

            x=x+1;
        }
        else
        {
            printf ("No\n");
        }
    }
            
    if (boton=='a')
    {
        if(casilla[x][y-1]==' ')
        {
            casilla[x][y]=' ';
                    
            casilla[x][y-1]='+';
            
            y=y-1;
        }
        else
        {
            printf ("No\n");
        }
    }
        
    if (boton=='d')
    {
        if(casilla[x][y+1]==' ')
        {
            casilla[x][y]=' ';

            casilla[x][y+1]='+';

            y=y+1;
        }
        else
        {
            printf ("No\n");
        }
    }

    for(int i = 0; i<mapY; i++)
    {
        for(int j = 0; j<mapX;j++)
        {
            printf("[%c]", casilla[i][j]);
        }
        printf("\n");
    }
   }
}
