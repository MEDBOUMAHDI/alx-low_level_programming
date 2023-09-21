/**
 * _strcmp - a function that compares two strings
 *
 * @str1: string 1 input to compare
 * @str2: against this other string 2
 * Return: 0 if str1 and str2 are equal
 * negative integer if the stopping character
 * in @str1 was less than the stopping character in @str2
 * positive integer if the stopping character
 * in @str1 was greater than the stopping
 * character in @str2
 */
int _strcmp(char *str1, char *str2)
{
	int i = 0, r;

	/**
	 * iterate through source and
	 * compare it with dest
	 */
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		 */
		if (str1[i] != str2[i])
		{
			/**
			 * return the difference between
			 * the two characters
			 */
			r = str1[i] - str2[i];
			break;
		}
		else
		{
			r = str1[i] - str2[i];
		}
		i++;
	}
	return (r);
}
