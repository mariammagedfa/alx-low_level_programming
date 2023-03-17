#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
