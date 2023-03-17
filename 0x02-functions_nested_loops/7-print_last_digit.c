#include "main.h"

/**
 * print_last_digit - Compute the absolute value of an integer number
 * @n: Number to calcule it the absolute value
 *
 * Return: Absolute value of a number.
 */

int print_last_digit(int n)
{
	int value;

	if (n % 10 < 0)
	{
		value = -1 * (n % 10);
	}
	else
	{
		value = n % 10;
	}
	_putchar('0' + value);
	return (value);
}
