#include "main.h"
/**
 * _abs - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
int d;
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (n);
}
else if (n < 0)
{
d = 0 - n;
return (d);
}
return (0);
}
