#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @des: char pointer
 * @sr: char pointer
 * Return: char pinter
 */
char *_strcpy(char *des, char *sr)
{
	int i;

	for (i = 0; sr[i] != '\0'; i++)
	{
		des[i] = sr[i];
	}
	des[i] = '\0';
	return (des);
}
