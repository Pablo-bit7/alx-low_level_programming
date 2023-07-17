#include <stdio.h>

int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
			putchar('0' + number);
		else
			putchar('a' + number - 10);
	}

	putchar('\n');

	return 0;
}
