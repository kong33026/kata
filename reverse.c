#include <stdio.h>
 
int main()
{
   int n, r ;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &n);
	r = reverse(n);
    
   printf("Reverse of entered number is = %d\n", r);
 
   return 0;
}

int reverse(int n)
{
	static int r = 0;
	
	if ( n ==0 )
	{
		return 0;
	}	
	
	r = r * 10;
	r = r+ n % 10;
	reverse (n/10);
	return r ;
}
