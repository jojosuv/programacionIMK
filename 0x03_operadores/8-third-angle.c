#include <stdio.h>

//que pida dos angulos para determinar el faltante

int main ()
{
    int a1,a2,a3;

    printf("Enter two angles of triangle:\n");
    scanf("%d%d", &a1,&a2);

    a3= 180-(a1+a2);

    printf("Third angle of the triangle = %d\n", a3);

    return 0;
}