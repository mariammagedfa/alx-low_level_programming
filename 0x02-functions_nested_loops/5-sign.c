#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */
int print_sign(int c)
{
	char sign;
	int value;

	if (c > 0)
	{
		value = 1;
		sign = '+';
	}
	else if (c < 0)
	{
		value = -1;
		sign = '-';
	}
	else
	{
		value = 0;
		sign = '0';
	}
	_putchar(sign);
	return (value);
}
