/**
 * _strlen - returns the length of a string
 * @string: string parameter input
 * Return: length of string
*/

int _strlen(char *string)
{
	int c;

	for (c = 0; *string != '\0'; ++string)
		++c;

	return (c);
}
