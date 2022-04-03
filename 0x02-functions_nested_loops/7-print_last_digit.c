#include "main.h"
/**
 * print_last_digit - returns the last digit of an entered number
 *
 * 
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int c = x % 10;

	if (x >= 0)
	{
		_putchar(c + '0');
		return (c);
	}
				
	else
		return (-c);
}
