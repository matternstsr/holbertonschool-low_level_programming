#include "main.h"

/**
 * puts2 - used to pull every 2 char in a string value
 * @*str: pointer for a string str
 * Return: void
 *
 */

void puts2(char *str)
{
        for (; *str; str += 2)
                {
                _putchar(str);
                }
        _putchar('\n');
}
