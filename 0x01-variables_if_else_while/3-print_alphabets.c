#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	putchar(lowercase);

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	putchar(uppercase);

putchar('\n');
	return (0);
}
