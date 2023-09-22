#include "main.h"
/**
 * rot13 - encodes a string into  rot13.
 * @source: string refrance
 * Return: *source encodd string into  rot13.
 */
char *rot13(char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		while (((source[i] >= 'a') && (source[i] <= 'z'))
		|| ((source[i] >= 'A') && (source[i] <= 'Z')))
		{
			if (((source[i] >= 'a') && (source[i] <= 'm'))
			|| ((source[i] >= 'A') && (source[i] <= 'M')))
			{
				source[i] = source[i] + 13;
				break;
			}
			source[i] = source[i] - 13;
			break;
		}
		i++;
	}
	return (source);
}
