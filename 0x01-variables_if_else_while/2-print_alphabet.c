#include <stdio.h>

/**
  *main - program starts from here
  *Return: always 0(sucess)
  */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
