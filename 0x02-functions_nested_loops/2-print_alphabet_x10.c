#include "main.h"
/**
  * print_alphabet_x10 - prints alphabets x10 then new line
  */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
