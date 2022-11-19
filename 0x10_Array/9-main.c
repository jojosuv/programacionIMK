#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE];
    int N, num, p;
    printf("Ingrese la cantidad de numeros:\n");
    scanf("%d", &N);

    printf("Ingrese %d numeros:\n", N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Ingrese el numero que quiere agregar:\n");

    scanf("%d", &num);

    printf("Ingrese la posicion donde quiere que esté:\n");
    scanf("%d", &p);

    if(p < N)
    {
        for(int i=N; i>p; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[p] = num;
        N++;
        
        printf("El nuevo arreglo queda:\n ");
        
        for(int i=0; i<N; i++)
        {
            printf("%d  ", arr[i]);
        }
    } 

}