#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function goes there */
/**
 * main - print a to z except q and e followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar('\n');
	return (0);
}
