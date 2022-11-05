#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
<<<<<<< HEAD
*(dest + i) =  *(src + i);
=======
dest[i] = src[i];
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e

return (dest);
}
