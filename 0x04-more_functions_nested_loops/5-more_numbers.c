#include "main.h"

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int number;
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar('0' + number / 10);
																                }
			_putchar('0' + number % 10);
		}
		_putchar('\n');
	}
}
