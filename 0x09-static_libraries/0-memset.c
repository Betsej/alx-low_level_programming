#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
<<<<<<< HEAD
*(s + i) =  b;
=======
s[i] = b;
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e

return (s);
}
