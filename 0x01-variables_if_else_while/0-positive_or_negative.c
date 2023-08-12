#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - entry
 *
 * description : false or true validation
 *
 * return : 0 (succes)
 *
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%f is postive\n", n);
	else if (n == 0)
		printf("%f is zero\n", n);
	else
		printf("%f is negative\n", n);
	return (0);
}
