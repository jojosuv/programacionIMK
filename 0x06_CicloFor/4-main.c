#include <stdio.h>

int main ()
{
    int n=0;
    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Even numbers between 1 to %d:\n", n);

    for(int i=2; i<=n; i=i+2)
    {
        printf("%d, ", i);
    } 

    return(0);
}