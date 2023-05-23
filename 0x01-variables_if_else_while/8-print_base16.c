#include <stdio.h>
/**
  * main -Entry point
  * Print numbers of base 16 in lowercase
  * Return: Always (0) Success
  */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (n = 0; n < 6; n++)
	{
		putchar('a' + n);
	}
	putchar('\n');
	return (0);
}
