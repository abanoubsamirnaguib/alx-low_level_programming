#include "main.h"

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char sh[]  = '_putchar';
	int ch;

	/*print a - z */
	for (ch = 0; ch < 8; ch++)
	{
		_putchar(sh[ch]);
	}
	_putchar('\n');
	return (0);
}
