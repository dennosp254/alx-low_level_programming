#include "main.h"
/**
  * print_alphabet - prints the lowercase alphabet using _putchar
  */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

	return (0);
}
