#include "main.h"
/**
 * puts_half - Entry point
 * @str: description for s
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int a = 0, len = 0;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 1)
{
for (a = (len + 1) / 2; a < len; a++)
{
_putchar(str[a]);
}
}
else
{
	for (a = len  / 2; a < len; a++)
	{
		_putchar(str[a]);
	}
}
_putchar('\n');
}
