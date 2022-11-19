//Write a C program to find sum of all array elements.
#include <stdio.h>
#define MAX_SIZE 1000

int main()

{
    int arr[MAX_SIZE];
    int N;
    int suma = 0; //para ir sumando poco a poco

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<N; i++)
    {
        suma = suma + arr[i];
    }
    
    printf("El total es: %d \n",suma);
}