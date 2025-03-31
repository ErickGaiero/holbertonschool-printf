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
 * rev_string - reverse a string
 *@s: string
 */
void rev_string(char *s)
{
	int cont = 0, n = 0, i;
	char aux;

	while (s[cont] != 0)
	{
		cont++;
	}
	i = cont / 2;
	while (i > 0)
	{
		cont--;
		aux = s[cont];
		s[cont] = s[n];
		s[n] = aux;
		n++;
		i--;
	}
}

/**
 * print_str - print a string
 *@str: string
 *Return: number of printed characters
 */

int print_str(char *str)
{
	int n = 0;

	if (!str)
		str = "(null)";
	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	return (n);
}

/**
 * print_int - print integer
 *@num: integer
 *Return: number of printed characters
 */
int print_int(int num)
{
	int cars = 0, cont = 0, aux = 0;
	char itos[13];
	int is_negative = 0;

	if (num == 0)
		return (_putchar('0'));
	if (num == INT_MIN)
	{
		num = -(INT_MIN / 10);
		aux = -(INT_MIN % 10);
		itos[cont++] = aux + '0';
		is_negative = 1;
	}
	else if (num < 0)
	{
		num = -num;
		is_negative = 1;
		(void)aux;
	} else
		(void)aux;

	while (num % 10 > 0 || num / 10 > 0)
	{
		itos[cont] = (num % 10) + '0';
		num = num / 10;
		cont++;
	}
	if (is_negative)
		itos[cont++] = '-';
	itos[cont] = 0;
	rev_string(itos);
	itos[cont] = 0;
	cars = print_str(itos);

	return (cars);

}
