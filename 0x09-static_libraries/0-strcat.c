#include "main.h"
/**
 * _strcat - concatenates two strings,
 *
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 *
 */
char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
int count = 0, count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (count2 >= 0)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
=======
int destLen = 0;
int srcLen = 0;

while (dest[destLen] != '\0')
destLen++;

while (src[srcLen])
{
dest[destLen] = src[srcLen];
srcLen++;
destLen++;
}
dest[destLen] = '\0';

>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
return (dest);
}
