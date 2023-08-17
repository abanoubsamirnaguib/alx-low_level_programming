#include "main.h"

/**
 * print_sign - functon to print c int
 * @c: parameter to print
 *
 * Description: print
 *
 * Return: 0 (success)
 *
 */

int print_sign(int c)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
