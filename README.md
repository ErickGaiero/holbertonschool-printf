# _printf

Este repositorio contiene todas las funciones necesarias para que `_printf()` funcione correctamente. Es una función personalizada basada en `printf()` de la biblioteca `<stdio.h>`.

## Descripción

`_printf()` es una función variádica que recibe un argumento llamado `format`, que es una cadena de caracteres, y una lista variable de argumentos.

## Valor de retorno

Devuelve la cantidad total de caracteres impresos, excluyendo el carácter nulo. Si ocurre un error, retorna `-1`.

## Archivos

| Archivo | Descripción |
|---------|------------|
| `printf.c` | Contiene la estructura principal de `_printf()` |
| `aux_functions.c` | Funciones auxiliares utilizadas en `_printf()` |
| `validation_functions.c` | Funciones de validación para procesar formatos |
| `main.h` | Archivo de cabecera con prototipos de funciones y bibliotecas necesarias |
| `README.md` | Documentación del proyecto |

## Prototipos de funciones

| Función | Descripción |
|---------|------------|
| `void rev_string(char *s);` | Invierte una cadena de caracteres |
| `int print_str(char *str, char rev);` | Imprime una cadena y la invierte |
| `int print_int(int num);` | Imprime un número entero |
| `int _printf(const char *format, ...);` | Función principal que imita `printf()` |
| `int per_validation(char actual, va_list ar);` | Valida el carácter de formato y ejecuta la función correspondiente |

## Caracteres de formato admitidos

| Formato | Descripción |
|---------|------------|
| `%c` | Imprime un carácter |
| `%s` | Imprime una cadena de caracteres |
| `%d` | Imprime un número decimal |
| `%i` | Imprime un número entero |
| `%r` | Imprime una cadena en orden inverso |
| `%%` | Imprime el carácter `%` |

## Cómo compilar y ejecutar

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o main.c
./a.out
```

## Ejemplo de uso

```c
#include "main.h"

int main(void)
{
    char str[] = "Texto de ejemplo";
    int num = 12345;
    char ch = 'X';
    
    _printf("Cadena: %s\n", str);
    _printf("Número: %d\n", num);
    _printf("Carácter: %c\n", ch);
    _printf("Cadena invertida: %r\n", str);
    _printf("Símbolo de porcentaje: %%\n");
    
    return (0);
}
```

## Salida esperada

```
Cadena: Texto de ejemplo
Número: 12345
Carácter: X
Cadena invertida: olpmeje ed otxeT
Símbolo de porcentaje: %
```

## Contribuyentes

- **Nahuel Bica y Erick Gaiero**
