#include "main.h"

/**
 * _isalpha - functon to print c int
 * @c: parameter to print
 *
 * Description: print
 *
 * Return: 0 (success)
 *
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
