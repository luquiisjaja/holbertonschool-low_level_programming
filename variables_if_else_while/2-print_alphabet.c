#include <stdio.h>

/**
* main - Entry point
*
* Description: Program that prints de alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
