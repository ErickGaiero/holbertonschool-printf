#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - print a string
 *@str: string
 *Return: number of printed characters
 */

int print_str(char *str)
{
	int n = 0;

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	return (n);
}
