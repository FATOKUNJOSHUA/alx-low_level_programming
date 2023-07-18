#include "main.h"
/**
 * set_char_pointer - Sets the value of a char pointer.
 * @pointer: Pointer to the char variable.
 * @value: Character value to set.
 */
void set_char_pointer(char *pointer, char value)
{
	*pointer = value;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char *pointer = &c;

	set_char_pointer(pointer, 'A');
	putchar("%c\n", *pointer);  /* Output: A */

	set_char_pointer(pointer, 'B');
	putchar("%c\n", *pointer);  /* Output: B */

	return (0);
}

