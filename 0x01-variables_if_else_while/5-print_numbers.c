#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function goeas there */
/**
 * main - print 0 to 9 followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
putchar('\n');
	return (0);
}
