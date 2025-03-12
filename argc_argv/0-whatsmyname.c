#include <stdio.h>

int _putchar(char c);

/**
 *main - a program that prints its name, followed by a new line.
 *@argv:is an array of strings containing the command-line arguments.
 *@argc:is the number of command-line arguments passed to the program.
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;
while (argv[0][i] != '\0')
	{
	_putchar(argv[0][i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
