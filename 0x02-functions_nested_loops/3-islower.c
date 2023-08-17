#include "main.h"

/**
 * _islower - functon to print c int
 * @c: parameter to print
 *
 * Description: print
 *
 * Return: 0 (success)
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
