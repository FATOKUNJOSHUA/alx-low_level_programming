#include <stdio.h>
/**
 * main - Entry point
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
putchar(la);
}
putchar('\n');
return (0);
}
