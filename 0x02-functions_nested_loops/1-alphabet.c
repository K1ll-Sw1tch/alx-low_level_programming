#include "main.h"

/**
 *print_alphabet - Prints alphabet in lowercase
 *
 *Return: Always 0
 */
void print_alphabet(void)
{
	char alp_lc;

	for (alp_lc = 'a'; alp_lc <= 'z'; alp_lc++)
		_putchar(alp_lc);
	_putchar('\n');
}
