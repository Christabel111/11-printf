#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_functions - Function converts numbers to char.
 * Return: Void.
 * @format: Sting being searched for %
 * @i: holds the place in which % was found in the string
 */

void(*get_functions(char *format, int i))(va_list, char*, char*, char*, int*)
{
	int v = 0;
	clf options[] = {
		{"c", _printf_c},
		{"s", _printf_s},
		{"%", _printf_p},
		{"d", _printf_d},
		{"i", _printf_i},
		{NULL, NULL}};
	while (options[v].op != NULL)
	{
		if (*options[v].op == format[i])
		{
			return (*options[v].funct);
		}
		v++;
	}
	return (NULL);
}
