#include  "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: parameter
 * Return: number of arguments
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	int *indi = &i, *indj = &j;
	char buffer[4000], tmp[250], *strtmp = NULL;
	void (*selectf)(va_list, char *, char *, char *, int *);

	if (format == NULL || arg == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);
	while (format && format[*indi])
	{
		if (format[*indi] != '%')
			buffer[*indj] = format[*indi];
		else
		{
			(*indi)++;
			selectf = get_functions((char *)format, *indi);
			if (selectf == NULL)
			{
				(*indi)--;
				buffer[*indj] = '%';
			}
			else
				selectf(arg, buffer, tmp, strtmp, indj);
		}
		(*indi)++;
		(*indj)++;
	}
	fwrite(buffer, *indj, 1, stdout);
	va_end(arg);
	return (*indj);
}
