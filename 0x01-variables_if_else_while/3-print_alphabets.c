#include <stdio.h>

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
	char ch = 'a';
	char CH = 'A';

	/*print a - z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z */
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
