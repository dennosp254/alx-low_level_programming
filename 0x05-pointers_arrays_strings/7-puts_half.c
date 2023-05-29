#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: The string to be checked
 */

void puts_half(char *str)
{
	int i = 0, len;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	for (i = (len + 1) / 2; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
