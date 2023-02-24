#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: Variable to be checked.
 *
 * Return: 1 if character uppercase, else return 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
