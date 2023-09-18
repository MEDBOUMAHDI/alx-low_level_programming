/**
 * swap_int - swaps the values of two integers
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
        int c;

        c = *a;
        *a = *b;
        *b = c;
}
