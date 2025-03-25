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
	char actual; /*Caracter actual*/

	va_start(ar, format);
	while (format && format[cont])
	{
		actual = format[cont];
		if (actual != '%' && actual != '\\')
		{
			putchar(actual);
			cars++;
		} else if (actual == '%')
		{
		} else {

		}
		cont++;
	}
	putchar('\n');
	return (cars);
}
