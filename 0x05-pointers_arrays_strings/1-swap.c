/*
 * swap_int : Function that swap the values of two integer
 * @a : integer parameter
 * @b : integer parameter
 * Return : Nothing
 */
void swap_int(int *a, int *b){
	 int c;
	 c = *a;
	*a = *b;
	*b = c;
}
