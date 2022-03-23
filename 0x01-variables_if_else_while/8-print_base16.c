#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function goes there */
/**
 * main - print al numbers of base 16
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
	
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
