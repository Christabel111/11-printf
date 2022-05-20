#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _itoa - Function converts numbers to char.
 * Return: Pointer to converted values.
 * @i: Integer to be converted to char.
 * @strout: Pointer to string that holds the converted value.
 * @base: Base of the numercial system.
 */

char *_itoa(int i, char *strout, int base)
{
	char *str = strout;
	int digit = 0;
	int sign = 0;

	if (i == 0)
	{
		*str = '0';
		return (str);
	}
	if (i < 0)
	{
		sign = 1;
		i = i * -1;
	}
	while (i)
	{
		digit = i % base;
		if (digit < 0)
		{
			digit = digit * -1;
		}
		if (digit > 9)
		{
			*str = 'A' + digit - 10;
		}
		else
		{
			*str = '0' + digit;
		}
		i = i / base;
		str++;
	}
	if (sign == 1)
	{
		*str++ = '-';
	}
	*str = '\0';
	_strrev(strout);
	return (strout);
}
