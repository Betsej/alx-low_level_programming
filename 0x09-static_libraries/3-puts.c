#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
<<<<<<< HEAD
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[count]);
count++;
}
=======
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
}
