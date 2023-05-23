#include <stdio.h>
/**
  * main - Entry point
  * Print  all posible combinations of single-digit no.
  * Return: Always (0) Success
  */
int main(void)
{
	int n = '0';

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
