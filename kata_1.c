#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int main(int argc, char *argv[])
{
	int a = 3;
	int b = 7;
	int (*func)(int x, int y);
	func = add;
	printf("func(%d, %d) return %d\n", a, b, func(a, b));

	func = sub;
	printf("func(%d, %d) return %d\n", a, b, func(a, b));

	return 0;
}
