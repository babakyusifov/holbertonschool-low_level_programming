#include "main.h"

/**
 * _islower - Entry point
 * @c: variable
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int i;
int u = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
u = u + 1;
}
else
{
u = u + 0;
}
}
if (u == 1)
{
return (1);
}
else
{
return (0);
}
return (0);
}
