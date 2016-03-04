#include <stdio.h>
 
int main(int argc ,char *argv[])
{
	int row, c, n, temp;
	
	printf ("enter the number of rows in pyramid of stars you wish to see. \n");
	scanf("%d",&n);
	
	temp  = n;
	
	for ( row = 1; row <=n; row++)
	{
		for ( c = 1;  c < temp; c ++)
		{
			printf(" " );
		}
		
		for ( c = 1; c <= 2*row -1 ; c++)
		{
			printf("*");
		}
	/*	for ( c = 1;  c < temp; c ++)
		{
			printf(" " );
		} */
		temp --;
		printf("\n");
	}
	return 0;
}

