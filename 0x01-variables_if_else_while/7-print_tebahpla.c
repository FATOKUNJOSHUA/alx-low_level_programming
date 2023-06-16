#include <stdio.h>
/**
* main - Entry point
* Prints the alphabet in reverse form
* Return: Always 0
*/
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	putchar(al);

	putchar('\n');

	return (0);
}
