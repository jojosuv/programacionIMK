#include<stdio.h>
int main()
{
 	int rows; 
 	printf("Input rows : \n");
 	scanf("%d", &rows);

	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}

    for(int i = rows - 1; i > 0; i--)
	{
		for(int j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}

 	return 0;
}