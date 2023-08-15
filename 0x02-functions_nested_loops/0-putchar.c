#include <unistd.h>
#include <math.h>
#include <main.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int _putchar(char p);

int main() {
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
int _putchar(char p) {
	return write(1, &p, 1);
}
