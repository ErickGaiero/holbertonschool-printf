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
	char actual, anterior; /*Caracter actual y anterior*/

	va_start(ar, format);
	while (format && format[cont])
	{
		actual = format[cont];
		if (actual != '%' && actual != '\\' && !anterior)
		{
			cars += _putchar(actual);
		} else if (!anterior)
		{
			anterior = actual;
		} else {
			cars += ant_check(anterior, actual, ar);
			anterior = 0;
		}
		cont++;
	}
	va_end(ar);
	return (cars);
}
