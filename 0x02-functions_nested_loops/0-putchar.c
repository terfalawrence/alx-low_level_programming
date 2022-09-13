#include "main.h"
/**
 * main - print "_putchar" followed by a new line.
 * Description: You are not allowed to use standard libraries.
 * Return: 0
 */
int main(void)
{
	char holberton[] = "_putchar";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
