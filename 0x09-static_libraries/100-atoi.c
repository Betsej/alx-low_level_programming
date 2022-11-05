#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
<<<<<<< HEAD
int i, d, n, len, f, digit;

i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (i < len && f == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}

if (f == 0)
return (0);

return (n);
=======
int i, value, sign;
char c;

i = 0;
value = 0;
sign = -1;
while (s[i] != '\0')
{
c = s[i];
if (c == '-')
sign *= -1;
else if (c >= '0' && c <= '9')
{
if (value < 0)
value = value * 10 - (c - '0');
else
value = (c - '0') * -1;

/* Make sure the next char is a number */
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}
i++;
}
if (sign < 0)
value *= -1;

return (value);
>>>>>>> 5c4f789eb19fff93c76a8d4c9c2dfa35a72fb95e
}
