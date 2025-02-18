#include <stdio.h>

/**
 *main - Entry Point
 *
 * Description: Program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 *Return: Alweys 0 (Success)
 */
int main(void)
{
	int n;
	char ab;

	for (n = '0' ; n <= '9' ; n++)
		putchar(n);

	for (ab = 'a' ; ab <= 'f' ; ab++)
		putchar(ab);
	putchar('\n');
	return (0);
}
