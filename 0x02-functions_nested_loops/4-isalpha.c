#include "main.h"

/**
 * _isalpha - returns 1 for alphabetic character, and 0 for anything else
 * @c: the character in ASCII code
 * return: 1 for alphabetic character, 0 for anything else.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
