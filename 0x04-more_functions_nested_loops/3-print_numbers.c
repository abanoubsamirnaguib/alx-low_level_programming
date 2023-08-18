#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n = 0;
	
	do {
		putchar(n + 48);
		n++;
	}while(n >= 0 && n <= 9);
	putchar('\n');
}
