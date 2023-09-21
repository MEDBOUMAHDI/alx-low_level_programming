/**
 * reverse_array - a function that reverses the
 * content of an array of integers
 * @x: pointer to int array
 * @y: is the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *x, int y)
{
	int tmp, i, e;

	i = 0;
	e = y - 1;
	while (i < e)
	{
		tmp = x[i];
		x[i] = x[e];
		x[e] = tmp;
		i++;
		e--;
	}
}
