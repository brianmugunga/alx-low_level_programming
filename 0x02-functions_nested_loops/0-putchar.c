#include "main.h"

/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int main(char c);
{
	char p[] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
