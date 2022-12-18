#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>

#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"


#define FILA 10
#define COL 10
#define MINA 10
#define inicio 1
#define cerrar 0

int ganar=0;
int perder=0;
int Minacols[10] = {};
int Minafila[10] = {};
int abrirEspacio = 0;
char  alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z', }; 

void imprimirTablero(int tablero[FILA][COL], int visible[FILA][COL]) 
{
    int fila, col;
    
    printf("\t");

    for(col=1; col<=COL; col++) 
    {
        printf(" %d", col);
    }

    printf("\n\n");

    for(fila=1; fila<=FILA; fila++) 
    {
        printf("%c\t", alphabet[fila-1]);
        for(col=1; col<=COL; col++) 
        {
            if(visible[fila][col]==inicio) 
            {
                printf(" %d", tablero[fila][col]);
            }
            else 
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}

int valido(int fila, int col) 
{
    if(fila>=1 && fila<=FILA && col>=1 && col<=COL) 
    {
        return 1;
    }
    return 0;
}

int numMina(int tablero[FILA][COL], int fila, int col) 
{
    int i, j, contador=0;
    for(i=fila-1; i<=fila+1; i++) 
    {
        for(j=col-1; j<=col+1; j++) 
        {
            if(valido(i, j) && tablero[i][j]==-1) 
            {
                contador++;
            }
        }
    }
    return contador;
}

void generarTablero(int tablero[FILA][COL]) 
{
    int fila, col, num;
    
    for(fila=1; fila<=FILA; fila++) 
    {
        for(col=1; col<=COL; col++) 
        {
            tablero[fila][col] = 0;
        }
    }
    
    srand(time(NULL));

    for(num=0; num<MINA; num++) 
    {
        int f = (rand()%FILA)+1;
        int c = (rand()%COL)+1;
        Minafila[num] = f;
        Minacols[num] = c;
        
        if(tablero[f][c]==-1) 
        {
            num--;
        }
        else 
        {
            tablero[f][c] = -1;
        }
    }
    
    for(fila=1; fila<=FILA; fila++) 
    {
        for(col=1; col<=COL; col++) 
        {
            if(tablero[fila][col]!=-1) 
            {
                tablero[fila][col] = numMina(tablero, fila, col);
            }
        }
    }
}

void verMina(int tablero[FILA][COL], int visible[FILA][COL],int fila, int col)
{
    for (int i = 1; i != 11; i++)
    {
        for (int j = 1; j != 11; j++)
        {
            if (visible[i][j] == cerrar && tablero[i][j] != -1)
            {
                libre(tablero,visible,i,j);
            }
        }
    }    
}

int libre(int tablero[FILA][COL], int visible[FILA][COL], int fila, int col) 
{
    if(valido(fila, col) && visible[fila][col]==cerrar) 
    {
        visible[fila][col] = inicio;
        abrirEspacio +=1;
        
        if(tablero[fila][col]==0) 
        {
            libre(tablero, visible, fila+1, col);
            libre(tablero, visible, fila-1, col);
            libre(tablero, visible, fila, col+1);
            libre(tablero, visible, fila, col-1);
            libre(tablero, visible, fila+1, col+1);
            libre(tablero, visible, fila+1, col-1);
            libre(tablero, visible, fila-1, col+1);
            libre(tablero, visible, fila-1, col-1);
        }
    }
}


int juegoGanado(int tablero[FILA][COL]) 
{

    int espacioAbierto = 0;
    int fila, col;
    int abrirEspacio = 0;

    for(fila=1; fila<=FILA; fila++) 
    {
        for(col=1; col<=COL; col++) 
        {
            
            if(tablero[fila][col]==inicio) 
            {
                abrirEspacio += 1;
            }
            else
            {
                espacioAbierto += 1;
            }
        }
    }
    
    if (espacioAbierto == MINA)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}


int checar(char x)
{
    
    for (int i = 0; i < 26; i++) 
    {
        if (toupper(x) == alphabet[i])
        {
            return(i+1);
                
        }
    }
}

int main() 
{
    int tablero[FILA][COL];
    int visible[FILA][COL];
    int fila, col;
    char letra;
    
    generarTablero(tablero);
    
    for(fila=1; fila<=FILA; fila++) 
    {
        for(col=1; col<=COL; col++) 
        {
            visible[fila][col] = cerrar;
        }
    }
    
    printf ("\nBUSCAMINAS DE JOANA SUAREZ Y MIGUEL CANUL (EQUIPO)\n");

    while(1) 
    {
        
        imprimirTablero(tablero, visible);
         printf("\n");
        printf("inserta una letra (dale enter) y el num (dale enter igual)");
        scanf(" %c %d", &letra, &col);
        
        fila = checar(letra);
        
        if(tablero[fila][col]==-1) 
        {
            perder = 1;
            
            printf("\n");
            printf("oh no que menso... pisaste una mina!!!\n");
            printf("\n");
            verMina(tablero,visible,fila,col);
            imprimirTablero(tablero, visible);
            printf("aqui estaban todas las minas\n");
            
            
            exit(1);
            //break;
        }
        else
        {
            
            libre(tablero, visible, fila, col);
            
            if(abrirEspacio == 90) 
            {
                imprimirTablero(tablero, visible);
                printf("Felicidades no explotaste...!!!\n");
                printf("\n");
                printf("toma una flor como recompensa 8(>.<)8 ❀\n");
                printf("\n");
                printf("para salir...recoge tu flor y preciona enter...\n");

                exit(1);
            }
        }
    }
    
    return 0;
}