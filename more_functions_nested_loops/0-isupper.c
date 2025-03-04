#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase character.
 * The standard library provides a similar function: isupper
 * Return: Always 0.
 */
int _isupper(int c)
{
if ('A' <= c && c <= 'Z')
{
return (1);
}
return (0);
}
