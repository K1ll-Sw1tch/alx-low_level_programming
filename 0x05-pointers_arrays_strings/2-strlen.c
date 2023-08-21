#include "main.h"

/**
 * _strlen -  a function that returns the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int str_length = 0;

	while (s[str_length])
	{
		str_length++;
	}
	return (str_length);
}
