#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function goes there */
/**
 * main - print combination of two digit
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m = 1;

	for (n = 0; n <= 8; n++)
	{
		while (m <= 9)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		m = n + 2;
	}
	putchar('\n');
	return (0);
}
