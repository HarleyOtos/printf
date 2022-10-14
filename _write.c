#include <unistd.h>

/**
 * _write - the character c to stdout
 * @c: printing character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
