#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if c is upper
 *
* @c : input for alphabet
 *
 * Return: 0 (success)
 */

char  _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
