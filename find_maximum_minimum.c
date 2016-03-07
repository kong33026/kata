#include <stdio.h>
 
int main(int argc ,char *argv[])
{
	int array[100], size, maximum, minimum, c, max_location =1, min_location =1;
	printf("input the number of elements in array \n");
	scanf("%d",&size);
	printf("enter %d integer\n",size);
	for ( c = 0 ; c < size ; c++)
	{
	scanf("%d", &array[c]);
	}
	maximum = array[0];
	minimum = array[0];
	
	for ( c = 1 ; c  <  size ; c++)
	{
		if (array[c]  >  maximum)
			{
				maximum = array[c];
				max_location = c + 1;
			}
		if (array[c]  <  minimum)
			{
				minimum = array[c];
				min_location = c+1;
			}
	}
	printf("Maximum element is present at location %d and it's value is %d.\n", max_location, maximum);
	printf("Minimum element is present at location %d and it's value is %d.\n", min_location, minimum);
	return 0;
}

