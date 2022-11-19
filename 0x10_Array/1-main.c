#include <stdio.h>
#define MAX_SIZE 1000 //dice los espacios que tiene el arreglo

int main()

{

    int arr[MAX_SIZE]; // muestra los 1000 espacios
    int N;

    printf("Ingrese el tamano del arreglo\n");
    scanf("%d", &N);
   
    printf("Ingrese %d de numeros: ",N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i< N; i++)
    {
        printf("Elemento arr[%d]: %d\n",i,arr[i]);
    }

}