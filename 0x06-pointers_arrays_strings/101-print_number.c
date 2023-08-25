#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int un;

	un = n;
	if (n < 0)
	{
		_putchar('-');
		un = -n;
	}
	if (un / 10 != 0)
	{
		print_number(un / 10);
	}
	_putchar((un % 10) + '0');
}
