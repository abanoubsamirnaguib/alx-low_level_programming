#include "main.h"

/**
 * print_alphabet_x10 - functon to print
 *
 * Description: print
 *
 * Return: 0 (success)
 *
 */

void print_alphabet_x10(void)
{
	int line, ch;

	/*print a - z */
	for (line = 0; ch <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
