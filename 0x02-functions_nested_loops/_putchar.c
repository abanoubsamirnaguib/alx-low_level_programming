#include <unistd.h>
#include "main.h"

/**
 *  _putchar - write the char c to stdout
 *	@c: the character to print
 *
 * Description: _putchar function to print char
 *
 *  Return: on success 1.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
