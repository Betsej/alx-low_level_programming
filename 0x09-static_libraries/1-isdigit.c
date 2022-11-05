#include "main.h"

/**
 * _isdigit - if is a digit
 *@c: print int
 * Return: Always 0.
 */

int _isdigit(int c)
{
<<<<<<< HEAD
if (c >= 48 && c <= 57)
{
return (1);
}

else
{
return (0);
}
=======
if (c >= '0' && c <= '9')
return (1);

return (0);
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
}
