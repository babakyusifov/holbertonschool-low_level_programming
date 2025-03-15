#include "main.h"
/**
 * _strpbrk - check the code
 * @s: - s
 * @accept: - var
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
return (s);
}
}
s++;
}
return (NULL);
}
