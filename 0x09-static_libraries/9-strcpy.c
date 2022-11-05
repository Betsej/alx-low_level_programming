#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
<<<<<<< HEAD
int count = 0;

while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
return (dest);
}
=======
int len = 0;

while (src[len])
{
dest[len] = src[len];
len++;
}
dest[len] = '\0';

return (dest);
}
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
