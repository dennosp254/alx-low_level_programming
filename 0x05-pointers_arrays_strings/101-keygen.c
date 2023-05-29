#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * generates random passwords
 * Return: Always 0 (Success)
 */

#define PASSWORD_LENGTH 10

void generatePassword(char *password)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
        	int index = rand() % (sizeof(charset) - 1);

        	password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0';
}

int main()
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];
	generatePassword(password);

	_putchar(password);
	_putchar('\n');
	return 0;
}
