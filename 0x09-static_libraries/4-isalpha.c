#include "main.h"

/**
 * _isalpha - checks if character is lowercase or uppercase
 * @c: the char to be checked
 *
 * Return: 1 if char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
<<<<<<< HEAD

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
=======
if ((c >= 'A' && c <= 'Z') ||
(c >= 'a' && c <= 'z'))
return (1);
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
else
return (0);
}
