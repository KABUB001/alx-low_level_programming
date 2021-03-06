#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Nothing
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int r = x * y;
			int a = r / 10;

			if (y != 0)
			{
				if (a != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

			if ((r / 10) == 0)
			{
				_putchar(r + '0');
			}
			else
			{
				int b = r % 10;

				_putchar(a + '0');
				_putchar(b + '0');
			}
		}

		_putchar('\n');
	}
}
