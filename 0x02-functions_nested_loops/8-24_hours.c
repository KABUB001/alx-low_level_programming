#include "main.h"
/**
 * jack_bauer - prints every minute of a day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;

	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 3; h++)
		{
			for (M = 0; M <= 5; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar(H + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(M + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}
