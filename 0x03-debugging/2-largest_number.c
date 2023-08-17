#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: 972
 * @b: -98
 * @c: 0
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);
}
