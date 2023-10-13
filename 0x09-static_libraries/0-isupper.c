#include "main.h"
/**
 * _isupper - Letters in Upper-Case 
 * @c: character to be checked
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
