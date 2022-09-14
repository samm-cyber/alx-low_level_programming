#include "print_alphabet"

/**
* print_alphabet-prints the alphabet
* Description: prints the alphabet
* Return: void
*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
