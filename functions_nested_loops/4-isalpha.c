#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
        if ((c) >= 'A' && (c) <= 'z')
{
        c = 1;
}
        if ((c)  >= '!' && (c) <= '@')
{
        c = 0;
}
        return (c);
}
