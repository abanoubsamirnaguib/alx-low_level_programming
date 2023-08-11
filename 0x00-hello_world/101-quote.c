#include <unistd.h>

/**
 * main - entery point
 *
 * Description: Write a C program that prints without printf or puts
 *
 * Return: the value 1 (unsucces)
 */
int main(void)
{
	char qou[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qou, 59);
	return (1);
}
