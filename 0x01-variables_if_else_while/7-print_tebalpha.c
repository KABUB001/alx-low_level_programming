#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function goes there */
/**
 * main - print from z to a followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
