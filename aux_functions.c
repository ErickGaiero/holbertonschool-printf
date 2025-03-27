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
 *  ant_check - check previous character
 *  @anterior: previous char
 *  @actual: actual char
 *  @ar: list of arguments
 *  */
int ant_check(char anterior, char actual, va_list ar)
{
        int cars = 0;
        if (anterior == '%')
        {
                cars = per_validation(actual, ar);
        } else
        {
                //cars = bs_validation(actual, ar);
        }

        return (cars);
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
