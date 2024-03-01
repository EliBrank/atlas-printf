#include <stdio.h>

void func(int num)
{
	if (num < 10 && num >= 0)
	{
		putchar(num + '0');
	}
	else
	{
		func(num / 10);
		putchar((num % 10) + '0');
	}
}

int main(void)
{
	int n = 1;
	
	func(n);
	putchar('\n');
	return (0);
}
