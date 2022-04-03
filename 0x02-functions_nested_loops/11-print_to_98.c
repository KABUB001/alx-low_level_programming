#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural number from n to 98
 *
 * @n: the starting number
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d\n", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d\n", n);
			n++;
		}
	}
}
