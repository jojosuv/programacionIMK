#include <stdio.h>

int main ()
{
    int n=0;
    int suma=0;

    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Sum of odd numbers between 1 to %d:\n", n);

    for(int i=1; i<=n; i=i+2)
    {
        suma=suma+i;
    } 

    printf("%d\n", suma);

    return(0);
}