#include <stdio.h>
/**
 * main - combination of numbers
 *
 * Return: 0 on succes
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(';');
			putchar(' ');
		}
	}
	return (0);
}
