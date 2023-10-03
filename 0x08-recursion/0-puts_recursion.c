#include "main.h"
/**
  * _puts_recursion - prints a string
  * @s: Source String
  * Return: the string printed
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
