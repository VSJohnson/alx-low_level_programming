#include <stdio.h>
/**
 * main - mirror
 *
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);

}
