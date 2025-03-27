#include "main.h"
/**
 * per_validation - validate cases with %
 * @actual: caracter
 * @ar: lista argumentos
 */
int per_validation (char actual, va_list ar)
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
			break;

		case 's':
			(void) car_aux;
			str_aux = va_arg(ar, char*);
			if (str_aux)
				cars = print_str(str_aux);
			break;

		default:
			_putchar(actual);
			break;	
	}
	return (cars);
}
