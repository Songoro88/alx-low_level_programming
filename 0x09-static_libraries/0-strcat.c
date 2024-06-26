#include "main.h"

/**
 * *_strcat - func. commute srtings
 * @dest: param pointer to a character
 * @src: param pointer to a character
 * Return: return value of Dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
