#include "main.h"
/**
 * puts2 - Entry point
 * @str: description for s
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int a = 0, len = 0;
while (*(str + len) != '\0')
{
len++;
}
for (a = 0; a < len; a = a + 2)
{
_putchar(str[a]);
}
_putchar('\n');
}
