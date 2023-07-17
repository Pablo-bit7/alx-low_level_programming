#include <stdio.h>

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}

	printf("\n");

	return 0;
}

