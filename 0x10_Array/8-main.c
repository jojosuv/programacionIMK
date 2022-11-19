#include <stdio.h>
#define MAX_SIZE 1000
int main()

{
    int arr[MAX_SIZE]; 
    int arr2[MAX_SIZE];

    int N;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<N; i++)
    {
        arr2[i]= arr[i];
    }

    for(int i = 0; i< N; i++)
    {
        printf("Elemento arr[%d]: %d\n",i,arr[i]);
    }
    
    for(int i= 0; i< N; i++)
    {
        printf("Elemento arr2[%d]: %d\n",i,arr2[i]);
    }
}