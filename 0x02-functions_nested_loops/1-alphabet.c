#include "main.h"

/**
 * print_alphabet - functon to print
 *
 * Description: print
 *
 * Return: 0 (success)
 *
 */

void print_alphabet(void)
{
	int ch;

	/*print a - z */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
