#include "main.h"
/**
 * main - main function .
 *
 * Return: 0
 */
int main(void)
{
        char a[] = "_putchar";
        int s = sizeof(a);
        int b;

        for (b = 0; b < s; b++)
        {
                _putchar(a[b]);
        }
        _putchar('\n');
        return (0);
}
