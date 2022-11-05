#include "main.h"
/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
<<<<<<< HEAD
int p = 0;
/*incremeant up to when the last character is NULL,\0*/
while (*(s + p) != 0)
{
p++;
}
return (p);
=======
int len = 0;

while (s[len])
len++;

return (len);
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
}
