/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @source: pointer to source input
 * @number: most number of bytes from @source
 * Return: @dest
 */
char *_strncat(char *dest, char *source, int number)
{
	int x, i;

	x = 0;

	/*find size of dest array*/
	while (dest[x])
		x++;

	/**
	 * source does not need to be null terminated
	 * if it contains number or more bytes
	 */
	for (i = 0; i < number && source[i] != '\0'; i++)
		dest[x + i] = source[i];
	/*null terminate dest*/
	dest[x + i] = '\0';

	return (dest);
}
