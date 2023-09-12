#include <unistd.h>

/**
 * _putchar - writes the character m
 * @m: The character to print
 * Return: always success 1.
 * On error, -1 is returned.
 */
int _putchar(char m)
{
	return (write(1, &m, 1));
}
int main(void){
	char m;
	_putchar(m);
}
