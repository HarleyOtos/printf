#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _print_int_binary - An int converted to binary
  * @args: A list of variadic arguments
  *
  * Return: The digits of number printed
  */
int _print_int_binary(va_list args)
{
	unsigned int x = 0;
	int b = 0, new = 0;

	new = va_arg(args, int);
	x = new;
	if (new < 0)
	{
		_write('1');
		new = new * -1;
		x = new;
		b += 1;
	}
	while (x > 0)
	{
		x = x / 2;
		b++;
	}
	_recursion_int_binary(new);
	return (b);
}

/**
  * _recursion_int_binary - Binary to print
  * @a: The integer to print
  */
void _recursion_int_binary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		_recursion_int_binary(t / 2);
	_write(t % 2 + '0');
}
