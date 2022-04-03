#include "main.h"
/**
 * print_last_digit - returns the last digit of an entered number
 *
 * 
 * Return: the last digit
 */
int print_last_digit(int x)
{
	if (x >= 0)
		return (x % 10);
	else
		return (-x % 10);
}
