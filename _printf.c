#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - function my printf
 * @format: string formatted to be printed
 *
 * Return: number of chars that print
 * Auth: 	Harley Otomofa
 *		Samuel Chibwe
 */
int _printf(const char *format, ...)
{
	buffer_t *output;
	va_list args;
	int length;

	if (format == NULL)
		return (-1);
	output = init_buffer();
	if (output == NULL)
		return (-1);

	va_start(args, format);

	length = _print_format(format, args);
	va_end(args);
	return (length);
}
