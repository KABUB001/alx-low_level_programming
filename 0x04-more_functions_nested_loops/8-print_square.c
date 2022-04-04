#include "main.h"
/**
 * print_square - prints a square
 * @size - input (size of the square)
 * Return: Nothing
 */
void print_square(int size)
{
	int n;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (x = 1; x <= size; x++)
			       _putchar('#');	
		}

		_putchar('\n');
	}

	else
		_putchar('\n');
}
