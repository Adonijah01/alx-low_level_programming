#include "main.h"
#include <ctype.h>
/**
 *_isalpha - check alphabetic character
 *@c: verify charactr
 *Return: 0
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}

/**
 * Adonijah Kiplimo
 */
