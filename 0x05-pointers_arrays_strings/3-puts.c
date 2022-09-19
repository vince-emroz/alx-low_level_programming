#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string to print
 *
 * Description: print a string
 * On success: returns mo error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
