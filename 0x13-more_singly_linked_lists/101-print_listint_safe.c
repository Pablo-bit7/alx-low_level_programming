#include <stddef.h>
#include "lists.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_address - Prints the address in hexadecimal format.
 * @address: The address to print.
 */
void print_address(size_t address)
{
	size_t divisor = 16 * 16 * 16 * 16 * 16 * 16 * 16;

	_putchar('0');
	_putchar('x');

	while (divisor > 0)
	{
		int digit = address / divisor;

		if (digit < 10)
			_putchar(digit + '0');
		else
			_putchar(digit - 10 + 'a');
		address %= divisor;
		divisor /= 16;
	}
}

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *checker;

	while (current != NULL)
	{
		checker = head;

		_putchar('[');
		print_address((size_t)current);
		_putchar(']');
		_putchar(' ');
		print_number(current->n);
		_putchar('\n');

		count++;

		while (checker != current)
		{
			if (checker == current->next)
			{
				_putchar('-');
				_putchar('>');
				_putchar(' ');
				_putchar('[');
				print_address((size_t)current->next);
				_putchar(']');
				_putchar(' ');
				print_number(current->next->n);
				_putchar('\n');
				return (count);
			}
			checker = checker->next;
		}

		current = current->next;
	}

	return (count);
}
