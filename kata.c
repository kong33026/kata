#include <stdio.h>

int (*function) ( int n ) ;

int acc(int x)
{
	return x+1;
}

int main (int argc , char *argv[])
{
	function = acc;
	printf("result = %d \n", function (4)); 
	
	return 0 ;
}

