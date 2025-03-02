#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i = 0, j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			if (i < 10)
			{
				_putchar ('0');
				_putchar (i % 10 + '0');
			}
			else
			{
				_putchar (i / 10 + '0');
				_putchar (i % 10 + '0');
			}
			_putchar (':');
			if (j < 10)
			{
				_putchar ('0');
				_putchar (j % 10 + '0');
			}
			else
			{
				_putchar (j / 10 + '0');
				_putchar (j % 10 + '0');
			}
			_putchar ('\n');
			j++;
		}
		j = 0;
		i++;
	}
}
