#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function goes there*/
/**
 * main - print 0 to 9 separated by "," and space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 8; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
