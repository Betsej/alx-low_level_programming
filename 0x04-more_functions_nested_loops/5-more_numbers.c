#include "main.h"

/**
 * more_numbers - prints numbers 0 t0 14
 * 10 times
 * Return: no return.
*/
void more_numbers(void)
{
    int i, ch;

    for (i = 0; i < 10; i++)
    {
        for (ch = 0; ch < 15; ch++)
        {
            if (ch >= 10)
                _putchar((ch / 10) + 48);
        }
        _putchar('\n');
    }
}
