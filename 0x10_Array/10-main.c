#include <stdio.h>
#define MAX_SIZE 1000

int main()

{
    int arr[MAX_SIZE];
    int N, p;

    printf("Introduzca el tamano del arreglo:\n");
    scanf("%d", &N);

    printf("Introduzca %d numeros:\n",N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Introduzca la posicion del elemento a eliminar:\n");
    scanf("%d", &p);
    
    if(p>=0)
    {
        for(int i=p; i<N; i++)
        {
            arr[i] = arr[i+1];
        }

        N=N-1;

        printf("El nuevo arreglo es:\n");
        
        for(int i=0; i<N; i++)
        {
            printf("%d  ", arr[i]);
        }
    }
}