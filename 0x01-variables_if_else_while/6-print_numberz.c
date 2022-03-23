#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function goes there */
/**
 * main - print 0 to 9 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
