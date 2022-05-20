#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strrev - Function reverses the argument string in place.
 * Return: Pointer to reversed string.
 * @string:  Character string to be reversed.
 */

char *_strrev(char *string)
{
	int i;
	int j;
	int tmp = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i / 2; j++)
	{
		tmp = string[j];
		string[j] = string[i - 1 - j];
		string[i - 1 - j] = tmp;
	}
	return (string);
}
