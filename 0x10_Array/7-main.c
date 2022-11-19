#include <stdio.h>
#define MAX_SIZE 1000
int main()

{
    int arr[MAX_SIZE];
    int N, negativo=0;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros:\n",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<N; i++)
    {
        if(arr[i]<0)
        {
           negativo= negativo + 1;
        }
    }

    printf("El total de  numeros negativos es %d\n", negativo);

}