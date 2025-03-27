#include "main.h"
/**
 * _printf - Prints a variable text following a format
 * @format : format to follow and base text
 * Return: length of printed
 */
int _printf(const char *format, ...)
{
	unsigned int cars = 0; /* Cantidad de caracteres impresos*/
	int cont = 0; /* contador while*/
	va_list ar; /*lista de argumentos*/
	char actual, siguiente; /*Caracter actual y anterior*/

	va_start(ar, format);
	if (!format)
		return (-1);
	while (format[cont])
	{
		actual = format[cont];
		if (actual != '%')
		{
			cars += _putchar(actual);
		} else
		{
			siguiente = format[cont + 1];
			if (format[cont + 1])
			{
				cars += per_validation(siguiente, ar);
				cont++;
			}
			else
				return (-1);
		}
		cont++;
	}
	va_end(ar);
	return (cars);
}
