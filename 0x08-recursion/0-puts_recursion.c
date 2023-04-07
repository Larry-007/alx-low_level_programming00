#include "main.h"
/**
 * _puts_recursion ~ functions almost like puts()
 * @s:i nput
 * Return 0 (sucsess)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

