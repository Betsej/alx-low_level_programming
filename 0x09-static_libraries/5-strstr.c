#include "main.h"
/**
 *  _strstr - finds the first occurrence of the substring.
 *  needle in the string haystack.
 *  @haystack: entire string.
 *  @needle: substring.
 *  Return: pointer to the beginning of located substring or
 *  NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
<<<<<<< HEAD
char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;
=======
int i, j, k;
char *resultInitial;

for (i = 0, k = 0; haystack[i] != '\0'; i++, j++)
{
resultInitial = &haystack[i];
j = 0;
while (needle[j + k] != '\0' && haystack[i + k] != '\0'
&& needle[j + k] == haystack[i + k])
{
if (haystack[i + k] != needle[j + k])
break;
k++;
}

if (needle[j + k] == '\0')
return (resultInitial);

	}
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack);
haystack = bhaystack + 1;
}
return (0);
}
