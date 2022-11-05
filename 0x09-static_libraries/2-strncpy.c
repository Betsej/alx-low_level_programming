#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
<<<<<<< HEAD

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
=======

for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];

for (; n > i; i++)
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
dest[i] = '\0';

return (dest);
}
