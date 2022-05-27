#include <stdio.h>

int main()
{
	int x = 2, y, z;

	x *= 3 + 2; //x=10 - Sağ operand işlemi yapılır önce
	printf_s("%d\n", x);//10

	x *= y = z = 4;//x=40,y=4,z=4
	printf_s("%d\n", x);//40

	x = y == z; // y ve z eşit diye 1 değeri atıyor. bunu da x'e atıyoruz
	printf_s("%d\n", x);//1

	x == (y = z);
	printf_s("%d\n", x);//1
}