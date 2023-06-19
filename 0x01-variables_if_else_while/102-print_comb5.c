#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 99; d1++)
	{
	for (d2 = d1 + 1; d2 <= 99; d2++)
	{
	int first_digit_d1 = d1 / 10;
	int second_digit_d1 = d1 % 10;
	int first_digit_d2 = d2 / 10;
	int second_digit_d2 = d2 % 10;

		putchar(first_digit_d1 + '0');
		putchar(second_digit_d1 + '0');
		putchar(' ');

		putchar(first_digit_d2 + '0');
		putchar(second_digit_d2 + '0');

	if (!(d1 == 99 && d2 == 99))
		{
		putchar(',');
		putchar(' ');
		}
	}
	}

	putchar('\n');

	return (0);
}
