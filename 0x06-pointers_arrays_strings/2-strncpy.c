/**
 * _strncpy - A function that copies a string.
 * @dest: pointer to destination input buffer
 * @source: pointer to source input buffer
 * @number: bytes of @source
 * Return: @dest
 */
char *_strncpy(char *dest, char *source, int number)
{
	int i;

	for (i = 0; i < number && source[i] != '\0'; i++)
		dest[i] = source[i];
	while (i < number)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
