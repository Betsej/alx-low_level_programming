#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
=======
int destLen, i;

for (destLen = 0; dest[destLen] != '\0'; destLen++)
;

for (i = 0; src[i] != '\0' && n > 0; i++, n--, destLen++)
{
dest[destLen] = src[i];
}
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e

return (dest);
}
