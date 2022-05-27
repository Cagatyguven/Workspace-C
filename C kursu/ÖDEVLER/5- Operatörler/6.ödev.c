#include <stdio.h>

int main()
{
	int x = 1;

	if (++x > 2,5)//2.5 demek değil 
		printf("%d", ++x);
	else
		printf("%d", x++);
}