#include <stdio.h>

int main()
{
	int x = -3 + 4 * 5 - 6; //20-9=11

	printf_s("%d\n", x);//11

	x = 3 + 4 % 5 - 6;//3+4-6=1

	printf_s("%d\n", x);//1

	x = -3 * 4 % -6 / 5;// -12 % 6 / 5 = 0/5 =0

	printf_s("%d\n", x);//0

	x = (7 + 6) % 5 / 2;//13 %5 /2=3/2=1 

	printf_s("%d\n", x);//1
}