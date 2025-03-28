#include "main.h"
/**
 * per_validation - validate cases with %
 * @actual: caracter
 * @ar: lista argumentos
 * Return: chars printed
 */
int per_validation(char actual, va_list ar)
{
	int cars = 0;
	char car_aux, *str_aux;

	switch (actual)
	{
		case '%':
			cars = _putchar(actual);
			break;
		case 'c':
			(void) str_aux;
			car_aux = va_arg(ar, int);
			if (car_aux)
				cars = _putchar(car_aux);
			else
				cars = _putchar(0);
			break;
		case 's':
			(void) car_aux;
			str_aux = va_arg(ar, char*);
			cars = print_str(str_aux, 0);
			break;
		case 'i':
			cars = print_int(va_arg(ar, int));
			break;
		case 'd':
			cars = print_int(va_arg(ar, int));
			break;
		case 'r':
			str_aux = va_arg(ar, char*);
			cars = print_str(str_aux, 1);
			break;
		default:
			cars += _putchar('%');
			cars += _putchar(actual);
			break;
	}
	return (cars);
}
