#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	for (n = 'A'; n <= 'Z'; n++)
	{

	        int lower_n = tolower(n);
		putchar(lower_n);
	}
	return (0);
}
