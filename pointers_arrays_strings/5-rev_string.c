#include "main.h"
/**
 * rev_string - Entry point
 * @s: description for s
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
char tmp;
int a = 0, len = 0;
while (*(s + len) != '\0')
{
len++;
}
for (a = 0; a < len / 2; a++)
{
tmp = *(s + a);
*(s + a) = *(s + len - a - 1);
*(s + len - a - 1) = tmp;
}
}
