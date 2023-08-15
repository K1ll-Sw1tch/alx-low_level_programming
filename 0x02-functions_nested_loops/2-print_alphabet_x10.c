#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char lt;
	int i;

	i = 0;

	while (i < 10)
	{
		lt = 'a';
		while (lt <= 'z')
		{
			_putchar(lt);
			lt++;
		}
		_putchar('\n');
		i++;
	}
}
